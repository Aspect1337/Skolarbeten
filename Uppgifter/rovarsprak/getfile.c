#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getConsonants(char* buffer, char* kons)
{
  int counter = 0;
  for(int i = 0; i < strlen(buffer); i++)
    {
      for(int j = 0; j < strlen(kons); j++)
        if(buffer[i] == kons[j])
          counter++;
    }
    return counter;
}

//Detta kan behövas splitras i 3 funktioner
void getFile()
{
    char* buffer = 0;
    char* translatedBuffer;
    char kons[] = "bcdfghjklmnpqrstvwxz";
    long length;
    int noOfConsonants;
    int totalLength;

    FILE* input = fopen("input.txt", "r"); 
    if(input != NULL)
    {
      fseek(input, 0, SEEK_END);
      length = ftell(input);
      fseek (input, 0, SEEK_SET);
      buffer = (char*)malloc(length*sizeof(char));
      if (buffer)
      {
        fread(buffer, sizeof(char), length, input);
      }
      fclose(input);
    }

    noOfConsonants = getConsonants(buffer, kons);
    totalLength = (length - noOfConsonants) + noOfConsonants*3;
    translatedBuffer = (char*)malloc(totalLength*sizeof(char));
    memset(translatedBuffer, ' ', totalLength);

    for(int i,j = 0; i < length && buffer[i] != '\0' ; i++) // buffer[i] != '\0'
    {
      char c = tolower(buffer[i]);
      if(strchr(kons, c))
      {
          translatedBuffer[j] = c;
          j++;
          translatedBuffer[j] = 'o';
          j++;
          translatedBuffer[j] = c;
          j++; 
      }
      else if (!strchr(kons, c))
      {
          translatedBuffer[j] = c;
          j++;
      }
    }
    translatedBuffer[totalLength] = '\0';
    printf("%s", translatedBuffer);
    FILE* output = fopen("output.txt", "w"); 

    fprintf(output, translatedBuffer);

    fclose(output); 
    free(translatedBuffer);
    free(buffer);
}

#include <stdio.h>
#include <stdlib.h>

typedef struct{
   char tag[3];
   char title[30];
   char artist[30];
   char album[30];
   char year[4];
   char comment[30];
}mp3Tags;


FILE *filestream; //FILE *pointer Stream


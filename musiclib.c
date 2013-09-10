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

mp3Tags readFile(char* filename){
  FILE *filestream = fopen(filename, "r");
  mp3Tags Tags;
  fgets(Tags.tag, sizeof(Tags.tag), filestream);
  fgets(Tags.title, sizeof(Tags.title), filestream);
  fgets(Tags.artist, sizeof(Tags.artist), filestream);
  fgets(Tags.album, sizeof(Tags.album), filestream);
  fgets(Tags.year, sizeof(Tags.year), filestream);
  fgets(Tags.comment, sizeof(Tags.comment), filestream);
  return Tags;
}

int main(){

  mp3Tags Tags = readFile("music0.mp3");
  printf("TAG: %s\n", Tags.tag);
  printf("TITLE: %s\n", Tags.title);
  printf("ARTIST: %s\n", Tags.artist);
  printf("ALBUM: %s\n", Tags.album);
  printf("YEAR: %s\n", Tags.year);
  printf("%s\n", Tags.comment);

  return 0;
  
}



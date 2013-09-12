#include <stdio.h>
#include <stdlib.h>

typedef struct{
}mp3Tags;

typdef struct{
  char frameID[4];
  int frameSize;
}frameHeader;

typdef struct{
  char ID3[3];
  char version[2];
  char flags[1];
  int totalSize;
}globalHeader;

int sizeCalc(char c[4]){
  int sum = 0;
  for(int i = 0; i < 3; i++){
    c[i] =c [i] & 127;
    sum += c[i];
    sum = sum << 7;
  }
  c[3] = c[3] & 127;
  sum += c[3];
  
  return sum;
}


frameHeader readHeader(char* filestream){
  frameHeader frameHeader;
  // reads frame header and returns information in
  // framHeader struct
  return frameHeader;
}

char readFrame(int size){
  char* frame[size];
  // takes in frame size and reads frame information
  // and returns a char array
  return frame;
}

mp3Tags readFile(char* filename){
  FILE *filestream = fopen(filename, "r");
  frameHeader currentFrame = readHeader();
  char* frame = readFrame(currentFrame.framSize);
  frame 
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



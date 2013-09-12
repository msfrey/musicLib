#include <stdio.h>
#include <stdlib.h>

/*

typedef struct{
  char track[30];
  char artist[30];
  char album[30];
  int tracknum;
  char genre[30];
  int year;
}mp3Tags;

typdef struct{
  char frameID[4];
  int frameSize;
}frameHeader;

*/

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

int readGlobalSize(char* filestream){
  char buffer[4];
  filestream += 6;
  fgets(buffer, 4, filestream);
  return sizeCalc(sum);
}

/*

frameHeader readHeader(char* filestream){
  frameHeader frameHeader;
  // reads frame header and returns information in
  // framHeader struct
  frameHeader.framsize = sizeCalc(readfile);
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
}

*/

int main(){
  FILE *filestream = fopen("music0.mp3", "r");
  readGlobalSize(filestream);
  return 0;
  
}



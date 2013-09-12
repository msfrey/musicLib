#include <stdio.h>
#include <stdlib.h>

int readFile(char* filename){
  FILE* filestream = fopen(filename, "r");

  char buffer[2];
  for(int i=0; i<150; i++){
    fgets(buffer, 2, filestream);
    printf("%s", buffer);
  }
  return 0;
}

int main(){

  /* readFile("music0.mp3"); */
  
  char c[4] = {'0', '1', '2', '3'};
  c[0] = c[0] & 127;
  c[0] = c[0] << 1;
  c[1] = c[1] & 127;
  c[1] = c[1] << 1;
  c[2] = c[2] & 127;
  c[2] = c[2] << 1;
  c[3] = c[3] & 127;
  c[3] = c[3] << 1;
  for(int i = 0; i < 4; i++){
    printf("%s\n", c[i]);
  }

  return 0;
  
}

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
  
  int c[4] = {0x00, 0x00, 0x01, 0x2A};
  int temp = 0;
  for(int i = 0; i < 3; i++){
    c[i] =c [i] & 127;
    temp += c[i];
    temp = temp << 7;
  }
  c[3] = c[3] & 127;
  temp += c[3];
  
  printf("%d", temp);

  return 0;
  
}

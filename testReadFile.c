#include <stdio.h>
#include <stdlib.h>
#include <convert_content.h>

int readFile(char* filename){
  FILE* filestream = fopen(filename, "r");

  char buffer[10];
  int read[4] = {3, 7, 4, 6};
  for(int i=0; i<1; i++){
    buffer = convert_content(filestream, 10);
    printf(">>> %s\n", buffer);
  }
  return 0;
}

int main(){

  readFile("music0.mp3");
  
  return 0;
  
}

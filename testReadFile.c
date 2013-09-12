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

  readFile("music0.mp3");
  
  return 0;
  
}

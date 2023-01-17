#include <stdio.h>
#include <stdlib.h>
#define sz 70
int main(void){

  FILE* file_ptr;
  char buffer[sz];
  char* text[10];
  int i=0;
  char ch;
  
  // opening file on read-mode
  file_ptr = fopen("books.txt","r");

  // checking if it was succesfully opened
  if(file_ptr == NULL){
    printf("ERROR 23001! Unexisting File\n");
  }else{
    printf("########################\n");
    printf("FILE SUCCESFULLY OPENED!\n");
    printf("########################\n");
  }
  
  // reading file
  /* do{ */
  /*   i = i+1; */
  /*   fscanf(file_ptr,"%c",&letter[i]); */
  /* }while(letter[i] != EOF); */
  

  /* while(!feof(file_ptr)){ */
  /*   fgets(buffer, sz, file_ptr); */
  /*   puts(buffer); */
  /* } */

  while ((ch = fgetc(file_ptr)) != EOF)
    {
      printf("%c",ch);
    }
  
  fclose(file_ptr);
  return 0;
}

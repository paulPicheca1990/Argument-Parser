#include <stdio.h>

int main(int argc, char *argv[]) {
  printf( "There were %i arguments...\n", argc );

  unsigned int index;
  for( index = 0; index < argc; index++ ) {
    char *value = argv[index];
    printf( "Argument[ %u ] :: %s\n", index, value );
  }
  
  return 0;
}
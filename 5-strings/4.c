#include <stdio.h>
#include <strings.h>
int main( int argc, char *argv[ ] )
{
  int cont;
  
  for(cont=0; cont < argc; cont++){

    if(strcmp(argv[cont], "UFOP") == 0)
        printf("bem vindo\n");
  }
  
  return 0;
}
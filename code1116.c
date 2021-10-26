#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 
  
void doSomething(char *str) 
{ 
    if (!str) 
                                     
    str[0] = 'S'; /* FIX */
} 
  
  
int main(int argc, char *argv[]) 
{ 
    char *str = (char *)NULL; 
    if ((str = (char *)malloc(256*sizeof(char))) != NULL) 
    { 
        strcpy(str, "Falut!"); 
        doSomething(str); 
        printf("%s\n", str); 
        free(str); 
        str = NULL; 
          
        doSomething(str); 
    } 
    return 0; 
} 
// IMplement protection against the use of an allocated memory after being freed
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 
  
  
int main(int argc, char *argv[]) 
{ 
    char *str[1] = {(char *)NULL}; 
    if ((str[0] = (char *)malloc(256*sizeof(char))) != NULL) 
    { 
        strcpy(str[0], "Falut!"); 
        str[0][0] = 'S'; 
        printf("%s\n", str[0]); 
        free(str[0]); 
        char *str1 = malloc(65536);  
        if(str1) 
            free(str1); 
        if (str[0]) 
            str[0][0] = 'S'; 
    } 
    return 0; 
} 
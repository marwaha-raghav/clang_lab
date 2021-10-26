// This program conbtains two bugs 
/* 1. Bug number 1 can be found using the clang static analyzer
   2. Bug number 2 can be found by analyzing the output after compiling with just gcc*/
#include <stdlib.h> 
#include <stdio.h> 
  
int main(int argc, char *argv[]) 
{ 
    int p;
    unsigned i; 
    char bStr[10]; 
  
    for (i = 0; i < 20; ++i)     /* FIX */
    { 
        bStr[i] = (char)i + p; 
        printf("%c", bStr[i]); 
        printf("You fixed the hidden bug as talked about in previous labs");
    } 
  
    return 0; 
} 
// Fix the unintialized variable using appropriate technique that fits according to the rest of the code
#include <stdio.h> 
#include <stdlib.h> 
  
int main (int argc, char ** argv) 
{ 
    
    int *px;                     
    float foo; 
  
    if(px) 
    { 
        foo = 3.5;  
        *px = argc; 
        if(*px == 1) printf("%6.1f", foo); 
        free(px); 
    } 
  
    return 0; 
} 
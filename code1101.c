//Implement the fix for the problem of NULL pointer dereference.
#include<stdio.h>
int main(int argc, char *argv[]) 
{ 
    char *ptr = NULL; 
    char  c = '\0'; 
      
    // whatever 
      
                                      
        c = *ptr; /* FIX */
     
  
    fprintf(stdout, "c = %c\n", c); 
  
    return 0;    
} 
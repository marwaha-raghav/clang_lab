#include <stdlib.h> 
#include <stdio.h> 
  
int main(){ 
      char * x = (char *) malloc(4); 
      if (x == NULL) 
        {printf("Memory allocation problem"); return 1;} 
      free(x);                                        
      if(x) *x = 'a'; /* FIX */
      return 0; 
} 
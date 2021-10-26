//Fix freeing already fixed memory
#include <stdlib.h> 
#include <string.h> 
#include <stdio.h> 
  
static char shellcode[] = "\xeb\x0cjump12chars_\x90\x90\x90\x90\x90\x90\x90\x90";  
  
int main(void) 
{ 
    int size = sizeof(shellcode); 
    char *shellcode_location; 
  
    shellcode_location = (char *)malloc(size); 
    if (shellcode_location == NULL) 
            {printf("Memory allocation problem"); return (1);} 
    strcpy(shellcode_location, shellcode); 
    printf("%s", shellcode_location); 
    free(shellcode_location); 
    free(shellcode_location);                            /* FIX */ 
    return 0; 
} 
/* ----->>>> Designed for CLANG Static Analysis and Vulnerabilites Lab for CY5130 --->>>>>*/

// Use C-Lang Static Analyzer to analyze and fix the bugs
// Hint this code has bugs that can be identified using static analyzer
// Also review the output generated to find any bugs/vulnerabilities that the static analyzer misses.

//MACROS 
#include<stdio.h>


//another custom array printing an array
void array_print(int* ptr3, int n)
{
    int sub;
    for(int i=0; i<100000000; i++)
    {
        ptr3[sub] = i; 
        sub=sub+1;
        printf("Array is:%d\n ",ptr3[i]);
    }
    
    
}

int main(){
    // variable initializations 
    int* ptr_to_arr;
    int size_array;
    
    //Note for developers(students): use variables in method using defined pointers (not directly)
    


    ptr_to_arr = (int*)malloc(sizeof(char));
    // Hint:: add and assign the references to the pointers here:
    
    
    //function call statements
    array_print(ptr_to_arr,size_array);
    return 0;


}
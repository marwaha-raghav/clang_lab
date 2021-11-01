/* ----->>>> Designed for CLANG Static Analysis and Vulnerabilites Lab for CY5130 --->>>>>*/

// Use C-Lang Static Analyzer to analyze and fix the bugs
// Also review the output generated to find any bugs that the static analyzer misses.
// Hint this code has 5-6 bugs that can be identified using static analyzer, 2 Tasks will also have to be completed 
//1.. add null pointer check condition for ptr1 and ptr2 in the even_number method
//2.. Complete even logic Logic using given pointer.

//MACROS (Hint: 1 macro definition for a library function is missing (look at warnings maybe?))
#include<stdio.h>


// custom method to check for even or odd number 
void even_number(int *ptr1, char* ptr2){
    printf("Original First Number is : %d \n ", (*ptr1));
    printf("Choice is : %c \n ", (*ptr2));
    
 // ----------------------- Secure Coding Task -------------------------------////   
    // Task 1: Implement a NULL pointer check condition (use if statment) (most important secure coding practice)
    
    // ------  add null pointer check condition for ptr1 Here-------
    
    //Task 2 : complete logic for reversing a number
     
     if()//add logic for checking even number inside if condition ()
     {
         //print statements
     printf("Numbner %d is Even : \n", (*ptr1));
     printf("Confirmed choice is : %c \n", (*ptr2));
     }
     else{
         printf("Odd Number\n");
     }
             
}

//another custom array printing an array
void array_print(int* ptr3, int n)
{
    for(int i=0; i<n+1; i++)
    {
        ptr3[i] = i; 
        printf("Array is:%d\n ",ptr3[i]);
    }
    
    
}

int main(){
    // variable initializations (Hint: Missing values?????)
    int first_number;
    char choice = 'Y'; 
    int* ptr_to_arr;
    int size_array;
    
    //Note for developers(students): use variables in method using defined pointers (not directly)
    
    int* ptr_to_first_number = NULL;
    char *ptr_to_char = NULL;
    ptr_to_arr = (int*)malloc(sizeof(double));
    // Hint:: add and assign the references to the pointers here:
    
    
    //function call statements
    even_number(ptr_to_first_number, ptr_to_char);
    array_print(ptr_to_arr,size_array);
    return 0;

}
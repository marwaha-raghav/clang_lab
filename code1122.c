/* ----->>>> Designed for CLANG Static Analysis and Vulnerabilites Lab for CY5130 --->>>>>*/

// Use C-Lang Static Analyzer to analyze and fix the bugs
// Also review the output generated to find any bugs that the static analyzer misses.
// Hint this code has 1-2 bugs that can be identified using static analyzer, 2 Tasks will have to be completed 
//1.. add null pointer check condition in the swap method for swapping logic.
//2.. Complete swapping Logic using given pointers.

//MACROS
#include<stdio.h>

// custom method to swap digits (without using third variable/pointer) passed to it as arguments from main()
void swap(int *ptr1, int *ptr2){
    printf("Original First Number is : %d \n ", (*ptr1));
    printf("Swapped Second Number is : %d \n ", (*ptr2));
    
 // ----------------------- Secure Coding Task -------------------------------////   
    // Task 1: Implement a NULL pointer check condition (use if statment) (most important secure coding practice)
    
    // ------  add null pointer check condition Here-------

    // logic for swapping
    *ptr1 = *ptr1 + *ptr2;
    //Task 2 : complete logic for swapping (Hint: required statements 2)
     //----- add logic here ------
     
     //print statements
     printf("Swapped First Number is : %d \n", (*ptr1));
     printf("Swapped Second Number is : %d \n", (*ptr2));
             
}

int main(){
    // variable initializations
    int first_number = 10;
    int second_number = 20; 
    
    //Note for developers(students): use numbers in method using defined pointers (not directly)
    
    int* ptr_to_first_number = NULL;
    int *ptr_to_second_number = NULL;
    // Hint:: add the assign the references to the pointers here:
    

    //function call statements
    swap(ptr_to_first_number, ptr_to_second_number);
    
    return 0;

}
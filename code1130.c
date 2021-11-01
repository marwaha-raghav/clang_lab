/* ----->>>> Designed for CLANG Static Analysis and Vulnerabilites Lab for CY5130 --->>>>>*/

// Use C-Lang Static Analyzer to analyze and fix the bugs
// Hint this code has bugs that can be identified using static analyzer
// Also review the output generated to find any bugs/vulnerabilities that the static analyzer misses.

//MACROS 
#include<stdio.h>


//another custom method printing an array
void pointer_playground(int* ptr_player)
{
   // ---------> Secure Coding Task --------------------<
   // implement a valid null value checker for ptr_player below:
   //Hint: pointer is null thus was never assigned--->function should return
   
   if(){ //implement the condition inside if parenthesis
    
       
   }
   else{
       printf("Player Playground zeroth position is: %d\n", *ptr_player);
   }

    
    
}

int main(){
    // variable initializations 
    int arr[] = {1,2,3};
    int *ptr_to_arr = NULL;


    //function call statements
    pointer_playground(ptr_to_arr);
    return 0;


}
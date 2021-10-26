//Null Pointer dereference problem
#include<stdio.h>
int size =5;
void recurse(){
    void (*foo)(void); //fix unitialized pointer
    foo();

    //recursive call (implement a valid recursice check mechanism to fix null dereference)
        foo();
    
}
int main(){
recurse();
return 0;
}
#include <iostream>
#include <stdio.h>

int main()
{
    int numbers[] = {4,6,8,2,7,5,0};

    for (int i = 0; i < 7; i++){
        if (numbers[i] == 0){
            printf("Found\n");
        }
    }
    printf('Not found\n');



    return 0;
}


// omega for lower band
// Binary search
//  If number behind middle door
//      Return true
// Else if number < middle door
//      Search left half
// Else if number > middle door 
//      Search right half
// dividing involvs O(logn) binary search
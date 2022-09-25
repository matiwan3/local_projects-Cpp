#include <stdio.h>
#include <string.h>
// #include <cs50.h>

int main(void){
    string names[] = {"Bill", "charlie", "Fred", "George", "Ginny","Percy","Ron"};

    for (int i = 0; i < 7; i++){
        if (strcmp(names[i], "Ron") == 0){
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
#include <iostream>

// Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
// void insertionSort(int n, int table[]){
//     int i,j;
//     for(i = 1; i < n; i++){
//         int key = table[i];
//         for(j=i; j>0 && table[j-1] > key; j--){
//             table[j] = table[j-1];
//         }
//         table[j] = key;
//     }
//     std::cout << table[n];
// }
// int main(){
//     int num = 10;
//     int arr[num] = {100,7,6,8,6,14,56,34,58,99};
//     insertionSort(num,arr);

//     return 0;
// }
// Time Complexity: O(N^2) 
// Auxiliary Space: O(1)
// https://youtu.be/OGzPmgsI-pQ

void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
  
        // Move elements of arr[0..i-1],  
        // that are greater than key, to one 
        // position ahead of their 
        // current position
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 
  
// A utility function to print an array 
// of size n 
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        std::cout << arr[i] << " "; 
    std::cout;
} 
  
// Driver code
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6, 68, 99, 1020, 3 ,4, 7}; 
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, N); 
    printArray(arr, N); 
  
    return 0; 
} 
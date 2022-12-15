#include<iostream>

int main ()
{
   int i, j,temp,pass=0;
   int array_size = 12;
   int a[array_size] = {10,2,0,14,43,25,18,1,5,45,21,45};
   std::cout <<"Input list ...\n";
   for(i = 0; i<array_size; i++) {
      std::cout <<a[i]<<"\t";
   }
std::cout<<std::endl;
for(i = 0; i<array_size; i++) {
   for(j = i+1; j<array_size; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
std::cout <<"Sorted Element List ...\n";
for(i = 0; i<array_size; i++) {
   std::cout <<a[i]<<"\t";
}
std::cout<<"\nNumber of passes taken to sort the list: "<<pass<<std::endl;
return 0;
}
// Bubble Sort is the simplest of the sorting techniques.
// In the bubble sort technique, each of the elements in the list is compared to its adjacent element. 
// Thus if there are n elements in list A, then A[0] is compared to A[1], A[1] is compared to A[2] and so on.
// After comparing if the first element is greater than the second, the two elements are swapped then.
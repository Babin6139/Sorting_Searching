#include <iostream>
#include "sort.cpp"

int main(){
    int arr[]={2,6,7,5};
    Quicksort(arr,0,3);
    printArray(arr,4);
}
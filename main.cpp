#include <iostream>
#include <algorithm>
#include "./sorting/sort.cpp"
using namespace std;

int binarysearch(int arr[], int left, int right, int element){
	int mid;
	if (right >= left) { 
        int mid = left + (right - left) / 2; 
        if (arr[mid] == element) 
            return mid; 
        if (arr[mid] > element) 
            return binarysearch(arr, left, mid - 1, element); 
        return binarysearch(arr, mid + 1, right, element); 
    } 
	return -1;
}

int main()
{
   int arr[10]={5,6,7,8,9,1,10,2,3,4};
   int element;
   Quicksort(arr,0,9);	
   cout<<"Enter the element you want to search?"<<endl;
   cin>>element;
   if (binarysearch(arr,0,9,element)==-1){
   		cout<<"Element not found "<<endl;	
	}
	else{
		cout<<"Element found at "<<binarysearch(arr,0,9,element)<<endl;
	}
	printArray(arr,10);
}

#include <iostream>
#include <algorithm>

using namespace std;

int binarysearch(int arr[], int left, int right, int element){
	int mid;
	mid=((left+right)/2);
	if (arr[mid]==element){
		return mid;
	}
	else{
		if (element<arr[mid]){
			binarysearch(arr,left,mid-1,element);
		}
		else{
			binarysearch(arr,mid+1,right,element);
		}
	}
}

int main()
{
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int element;
   cout<<"Enter the element you want to search?"<<endl;
   cin>>element;
   if (binarysearch(arr,0,9,element)==-1){
   		cout<<"Element not found "<<endl;	
	}
	else{
		cout<<"Element found at "<<binarysearch(arr,0,9,element)<<endl;
	}
   
}

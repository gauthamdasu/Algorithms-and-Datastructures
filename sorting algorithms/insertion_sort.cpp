/* Insertion sort for sorting input array of integers

Idea : To find the correct position of the input element as and when it is comming.
     1. make the jth element as the key and copy the element in the appropriate postion
     2. For each of the element this is done.
*/

#include<iostream>
#include<chrono>
using namespace std;

void insertion_sort(int arr[], int n){
    int i=0,j=1;
    for(j=1;j<n;j++)
	{
	 int key = arr[j];
	i=j-1;
	while(i>0 && arr[i]>key){
	    arr[i+1]=arr[i];
	    i--;
	}	
	
	arr[i+1]=key;
	}
}

void print_array(int arr[],int n){
    for(int j=1;j<n;j++)
	cout<<arr[j]<<" ";
	cout<<endl;



}
int main()
{
int arr[] = {5,24,1,6,3,7,4,2};
int size = sizeof(arr)/sizeof(arr[0]);
cout<<"Size of the array: "<<size<<endl;
cout<<endl<<"Input array\n";	
print_array(arr,size);
insertion_sort(arr,size);
cout<<endl<<"Sorted array\n";	
print_array(arr,size);

return 0;
}

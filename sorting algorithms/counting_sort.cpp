/*
Counting sort is useful and is O(N) sorting algorithm, using extra space when the input range of elements is known in advance ie if range of elements is 0-k.
Idea : Idea is simple create a new array and make the count for each of the element in the array as 1 and for each element increment the count of the in the allocated array say "C". Each element C[i] has the count of elemts till i.
 
Next add the previous element to current element in C. And insert the element in the appropriate location in the array to be returned.
*/
#include<iostream>
using namespace std;

void print(int arr[],int size)
{
    for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}



void counting_sort(int arr[], int size){
//range is from 0-9
int temp[10]={0},b[size]={0};
//int *b = new int[10,0]; 
    
    for(int j=0;j<size-1;j++)
	temp[arr[j]]++;
    
    
    for(int j=1;j<10;j++)
	temp[j]+=temp[j-1];
    
    for(int j=size-1;j>=0;j--){
	b[temp[arr[j]]]=arr[j];
		temp[arr[j]]--;
       }
   
     for(int i=0;i<size;i++)
	arr[i]=b[i];

}

int main(){
int size=0;
int arr[]={4,1,5,3,2,7,6,5,4,5,7,3,2};
int *b;
size= sizeof(arr)/sizeof(arr[0]);
cout<<"Before Sorting"<<endl;
print(arr,size);
cout<<"After Sorting"<<endl;
counting_sort(arr,size);
print(arr,size);


return 0;
}

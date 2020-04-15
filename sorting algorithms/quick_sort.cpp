/*
Quick sort in c++. It is an inplace sorting algorithm with worst time complexity of O(N^2) and average time complexity of O(NlogN)
Idea: Partition is the main key step.
Divide and conqure is the key step.
Find the correct postion of the partition element and recursively apply quick sort on the elements from 0 to q-1 and q+1 to length.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low, int high){
int key= arr[high];
int i=low-1;
    for(int j=low;j<=high-1;j++){
	if(arr[j]<key){
	    i++;
	    swap(arr[i],arr[j]);
	}

     }
    swap(arr[i+1],arr[high]);
return i+1;
}



void quick_sort(vector<int> &arr, int low, int high)
{
if(low<high){
    int q = partition(arr,low,high);
	quick_sort(arr,low,q-1);
	quick_sort(arr,q+1,high);
}
}


void print_vector(vector<int> &arr){
    for(int i : arr)
	cout<<i<<" ";
	cout<<endl;
}


int main(){
vector<int> input{4,35,6,7,2,1,88,945,235};
quick_sort(input,0,input.size()-1);
print_vector(input);
return 0;
}

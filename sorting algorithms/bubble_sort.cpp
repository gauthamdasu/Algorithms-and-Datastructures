// Bubble sort in c++. This is a basic sorting algorithm and this program sorts an array of integers given as input.
/*
Idea: swap the adjacent elements if first element is not greater than the second element.
Two for loops will be used in the code and after each iteration the i elements are present in their respective positions ie sorted.
*/
#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono; 
void bubble_sort(int arr[], int n){
 int i=0,j=0;
 bool flag=false;
	for(i=0;i<n;i++)              // for each element determine the correct position.
	   for(j=0;j<n-i-1;j++)	     // the last i-1 elements are in correct postion.
	    {
		if(arr[j]>arr[j+1])
		   {
			swap(arr[j],arr[j+1]);
	   	  	flag= true;  
		   }
	if(!flag)
		break;
	   }
}

int main(int argc, char* argv[] ){
int * arr = NULL;
int size=0,val=0;
 
    std::cout<<"Enter the size of the array."<<std::endl;
    std::cin>>size;
    arr = new int[size,0];
 
    std::cout<<"Enter the values\n"<<std::endl;
	
        for(int i=0;i<size;i++)
	{
		std::cin>>val;
		arr[i]=val;
	}
 	auto start = high_resolution_clock::now(); 
	bubble_sort(arr,size);       
	auto stop = high_resolution_clock::now(); 

	auto duration = duration_cast<microseconds>(stop - start); 
  
         cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl; 
	for(int i=0;i<size;i++)
		std::cout<< arr[i];
		std::cout<< std::endl;
return 0;
}

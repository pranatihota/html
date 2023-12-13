#include<iostream>
using namespace std;

void revarray(int arr[],int size);
void revarray(int arr[],int size)
{  
    
   int  start=0;
   int end=size-1;
    while (start<=end)
    {
    swap(arr[start],arr[end]);
    start++;
    end--;

    }

}
void printarr(int arr[],int size);
void printarr(int arr[], int size)
{
    int i;
cout<<"reverse array is: "<<endl;
 for(i=0;i<size;i++)
 {
    cout<<arr[i]<<endl;
 
 }
}
int main() 
{
int arr[50];
int n,i;

cout<<"enter an array size";
cin>>n;
cout<<"enter an array";
for(i=0;i<n;i++)
{
    cin>>arr[i];

}

revarray(arr,n);
printarr(arr,n);

}
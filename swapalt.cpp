#include<iostream>
using namespace std;


void swapalt(int arr[],int n);
void swapalt(int arr[],int n)
{

int start=0;

int i;

for(i=0;i<=n;i++)
{
int end=start+1;
swap(arr[start],arr[end]);
start= start+2;
}
}

void printarr(int arr[],int n);
void printarr(int arr[], int n)
{
    int i;
cout<<"reverse array is: "<<endl;
 for(i=0;i<n;i++)
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
for(i=0;i<n;i++){

    cin>>arr[i];
}

swapalt(arr, n);
printarr(arr,n);
}
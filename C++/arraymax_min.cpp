#include<iostream>
using namespace std;

int arraymax(int arr[],int size);
int arraymax(int arr[],int size)
{
int max,j;
max=arr[0];
for(j=0;j<size;j++)
{
if(max<arr[j])      // big=max(big,arr[j]);

{
    max=arr[j];

}
}
return max;
}

int arraymin(int arr[],int size);
int arraymin(int arr[],int size)
{
int min,j;
min=arr[0];
for(j=0;j<size;j++)
{
if(min>arr[j])       //// small=min(small,arr[j]);
{
    min=arr[j];
}
}
return min;
}
int main()
{
int n,i,k,t;
int input[1000];

    cout<<"Enter the size:";
    cin>>n;

for(i=0;i<n;i++)
{
    cin>>input[i];
}
cout<<"the largest number is:"<<arraymax(input,n);
cout<<endl<<"the smallest number is:"<<arraymin(input,n);

}


#include<iostream>
using namespace std;

void unique(int arr[], int size);
void unique(int arr[], int size)
{
   int i;
int ans=0;
  
    for(i=0;i<size;i++)
    {
        ans=ans^arr[i];

    }
    cout<<"the ans is:"<<ans;
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
unique(arr,n);

}
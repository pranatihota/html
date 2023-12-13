#include<iostream>
using namespace std;

int arraysum(int arr[],int size);
int arraysum(int arr[],int size)
{

    int i,sum=0;
for(i=0;i<size;i++)
{
    sum=sum+arr[i];
}

return sum;
}
int main()
{
int n,i;
int input[1000];

    cout<<"Enter the size:";
    cin>>n;

for(i=0;i<n;i++)
{
    cin>>input[i];
}
cout<<"sum is:"<<arraysum(input,n);


}

#include<iostream>
using namespace std;
int main()
{ 
int m;
cout<<"enter position";
cin>>m;

   int arr[]= {1,2,1,2,3};
   // int n=sizeof(arr)/sizeof(int);
	int i,j;
	
	int brr[50];
for (i=0;i<5;i++)
{
	brr[i]=arr[i];
}

int start=arr[m+1];
int end=4;
while(start<=end)
{
    swap(arr[start],arr[end]);
    start++;
    end--;	
}

for (i=m+1;i<5;i++)
{
	brr[i]=arr[i];
}


 
 for(i=0;i<5;i++)

 {
	 cout<<brr[i]<<endl;
 }
}
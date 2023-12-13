#include<iostream>
using namespace std;
int main()
{ int n,i;
 cout<<"enter number:";
 cin>>n;
int count=0;
int bit=0;
while(n!=0)
{
    bit=n&1;
    if(bit==1)
    count++;
    n=n>>1;
}
if (count==1)
cout<<"the number is power of 2";
else 
cout<<"the number is not power of 2";
}
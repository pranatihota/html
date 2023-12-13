#include<iostream>
using namespace std;

bool search(int arr[],int size, int key);
bool search(int arr[],int size, int key)
{
int i;
for(i=0;i<size;i++)
{
    if(key==arr[i])
    return 1; 
}

    return 0;
}



int main()
{
    int arr[] = {2, 5 ,7 ,4 ,3 ,-1};
int key;

    cout<<"Enter number to search";
    cin>>key;
//bool found = search(arr,6,key);
    if(search(arr,6,key))
    {
        cout<<"key is found";

    }
    else
    {
       cout<<"key not found";
    }

}








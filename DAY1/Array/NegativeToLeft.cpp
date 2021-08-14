#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size],i,arr1[size],counter =size-1,counter1=0;
    cout<<"Enter the elements of array :";
    for(i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    
    for(i=0;i<size;i++)
    {
        if(!(arr[i] < 0))
        {
            arr1[counter]=arr[i];
            counter--;
        }
        else
        {
            arr1[counter1] = arr[i];
            counter1++;
        }
    }

    for(i=0;i<size;i++)
    {
        cout << arr1[i] <<" ";
    }

    return 0;
}
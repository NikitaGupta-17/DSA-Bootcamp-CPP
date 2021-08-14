#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array :";
    cin>>size;
    int arr[size],i;
    cout<<"Enter the elements of array :";
    for(i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    i=0;
    int j=0;
    for(i=0;i<size;i++)
    {
        if(arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    
    for(i=0;i<size;i++)
    {
        cout << arr[i] <<" ";
    }
    /*
    int arr1[size],counter =0
    for(i=0;i<size;i++)
    {
        if(arr[i] != 0)
        {
            arr1[counter++]=arr[i];
        }
    }
    while(counter < size)
    {
        arr1[counter] = 0;
        counter ++;
    }

    for(i=0;i<size;i++)
    {
        cout << arr1[i] <<" ";
    }*/

    return 0;
}
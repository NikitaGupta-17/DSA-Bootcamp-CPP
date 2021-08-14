#include<iostream>
using namespace std;

int main()
{
    int size,i,count=0,j,x;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout<<"Enter the value of x: ";
    cin>>x;
    cout << "Enter the elements of array:";
    for(i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    
    for(i=0 ; i<size ; i++)
    {
        if(arr[i]>=x)
        {
            cout<<"Ceil = "<<arr[i]<<endl;
            count++;
            break;
        }
    }
    if(count == 0)
    cout<<"Ceil doesn't exist in array for x = "<<x<<endl;

    count=0;

    for(i=0 ; i<size ; i++)
    {
        if(arr[i]<=x)
        {
            cout<<"Floor = "<<arr[i];
            count++;
            break;
        }
    }

    if(count == 0)
    cout<<"Floor doesn't exist in array for x = "<<x;

    return 0;
}
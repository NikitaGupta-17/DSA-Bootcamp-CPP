#include<iostream>
using namespace std;

int main()
{
    int size,i,count,j;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of array:";
    for(i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    
    for(i=0 ; i<size ; i++)
    {
        count=0;
        for(j=i+1 ; j<size ; j++)
        {
            if(arr[i] > arr[j])
            count++;
        }
        if(count == (size-i-1))
        cout << arr[i] << " ";
    }
    
    return 0;
}
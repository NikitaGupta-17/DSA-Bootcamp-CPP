#include<iostream>
using namespace std;

int main()
{
    int size,i;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size],reverse[size];

    cout << "Enter the elements of array:";
    for(i=0;i<size;i++)
    {
        cin >> arr[i];
        reverse[size-i-1] = arr[i];
    }
    
    cout<< "Reverse Array : ";
    for(i=0; i <size ;i++)
    {
       cout << reverse[i] << " ";
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int size,i,j=0,temp=0;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size],odd[size],even[size];
    
    cout << "Enter the elements of array:";
    for(i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<size;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[j]=arr[i];
            j++;
        }       
    }

    int k=0;

    for(i=0;i<size;i++)
    {
        if(arr[i] % 2 != 0)
        {
            odd[k]=arr[i];
            k++;
        }       
    }
    
    for(i=0;i<j;i++)
    cout<<even[i]<<" ";

    cout<<endl;

    for(i=0;i<k;i++)
    cout<<odd[i]<<" ";
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int size,i;
    cout << "Enter the size Of array : ";
    cin >> size;
    int arr[size];
    cout <<"Enter the arrray elements : ";
    for(i=0; i<size ; i++)
    {
        cin >> arr[i];
    }
    int buy ,sell,j;
    for(i=0;i<size;i++)
    {
        buy=arr[i];
        for(j=i+2;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                sell = arr[j-1];
                cout<<"Buy at "<<i+1<<"and sell at "<<j;
            }
        }
    }
    return 0;
}
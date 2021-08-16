#include<iostream>
using namespace std;
void sumTarget(int arr[],int n,int sum)
{
    int F =arr[0];
    int L = arr[n-1];
    while(F!=L)
    {
        if(F + L > sum)
        {
            L--;
        }
        if(F + L < sum)
        {
            F++;
        }
        if(F+L == sum){
        cout<<F <<"+"<<L<<"="<<sum;
        break;}
    }
}

int main()
{
    int size;
    cout<<"Enter size of array :";
    cin>>size;
    int arr[size],sum;
    cin>>sum;
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    sumTarget(arr,size,sum);
}

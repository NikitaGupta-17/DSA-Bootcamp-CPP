#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num,num1,num2;
    cout << "enter a number : ";
    cin >> num;
    string str;
    if(num < 100)
    cout << "Not a fascinating number ";
    else
    {
        int concatinatenum = num;
        num1 = num*2;
        num2 = num*3;
        concatinatenum = concatinatenum*pow(10,int(log10(num1)+1)) + num1;
        concatinatenum = concatinatenum*pow(10,int(log10(num2)+1)) + num2;
        str = to_string(concatinatenum);
        int count =0;
        for(int i =0 ; str[i] !='\0' ; i++)
        {
            if(str[i] == '1' || str[i] =='2' || str[i] =='3' || str[i] =='4' || str[i] =='5' || str[i] =='6' || str[i] =='7' || str[i] =='8' || str[i] =='9')
            count++;
        }
        if(count == 9)
        cout << "It is a fascinating number";
        else
        cout << "Not a fascinating number";
    }
    return 0;
}
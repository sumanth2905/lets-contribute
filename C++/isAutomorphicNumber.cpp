// A program to check whether a number is automorphic or not
// A number whose square ends with the given number
#include<iostream>
using namespace std;
int square(int num)
{
    return num*num;
}
/*
int calcDigits(int num)
{   
    int totalDigits = 0;
    while(num>0)
    {
        num/=10;
        totalDigits++;

    }
    return totalDigits;
}
*/
bool isAutomorphic(int num)
{   
    int realNum = num,totalDigits=0,squareVal;
    // totalDigits = calcDigits(num);
    squareVal = square(num);
    while(num>0)
    {
        if(num%10!=squareVal%10)
            return 0;
        num/=10;
        squareVal/=10;
        
    }
    return 1;
    
}
int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    if(isAutomorphic(num))
        cout<<num<<" is an Automorphic number.\n";
    else
        cout<<num<<" is not an Automorphic number.\n";
    return 0;
}


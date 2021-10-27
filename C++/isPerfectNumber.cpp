// A program to check whether a number is a perfect number or not.
// A number whose sum of divisors, not including itself is equal to the number
#include<iostream>
using namespace std;

bool isPerfect(int num)
{   int sum=0;
    for(int div=1; div < num; div++)
    {
        if(num%div==0)
            sum += div;
    }
    if(sum == num)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cout<<"Enter a number\n";
    cin>>num;

    if(isPerfect(num))
        cout<<num<<" is a perfect number.\n";
    else
        cout<<num<<" is not a perfect number.\n";
    return 0;
}

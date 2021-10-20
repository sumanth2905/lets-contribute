//A program to convert from binary to decimal
#include<iostream>
#include<math.h>
using namespace std;

double binToDeci(int binary)
{   
    int bit,deci=0,i=0;
    while(binary>0)
    {
        bit = binary%10;
        deci += bit*pow(2,i);
        binary /=10;
        i++;
    }
    return deci;
}
int main()
{
    double binary;
    
    cout<<"Enter a binary number.\n";
    cin>>binary;
    cout<<"Decimal value of "<<binary<<" is "<<binToDeci(binary)<<endl;

    return 0;

}


// A Program to print the ASCII code of the given character
#include<iostream>

using namespace std;

int main()
{
    char ch;
    int asciiValue;

    cout<<"Enter a character.\n";
    cin>>ch;

    asciiValue = ch;

    cout<<"The ASCII value of "<<ch<<" is "<<asciiValue<<endl;

    return 0;
}
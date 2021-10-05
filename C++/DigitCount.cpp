#include <bits/stdc++.h>
using namespace std;
 
int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int main(void){
    long long n = 1234567;
    cout << "Number of digits : " << countDigit(n); //function call
    return 0;
}

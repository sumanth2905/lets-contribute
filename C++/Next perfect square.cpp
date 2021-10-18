#include <iostream>
#include<cmath>
using namespace std;
int nextPerfectSquare(int N){
    int nextN = floor(sqrt(N)) + 1;
    return nextN * nextN;
}
int main(){
    int n = 35;
    cout << nextPerfectSquare(n);
    return 0;
}

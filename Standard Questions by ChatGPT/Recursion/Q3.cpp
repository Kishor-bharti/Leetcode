// Find factorial of a number
#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 1)  return 1;

    return n * factorial(n-1);
}

int main(){
    int fac = factorial(5);
    cout<<fac;
}
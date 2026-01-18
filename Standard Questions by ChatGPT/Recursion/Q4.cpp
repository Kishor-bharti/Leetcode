// Find sum of first N numbers
#include<iostream>
using namespace std;

int sumOfNums(int n){
    if(n == 0) return 0;

    return n + sumOfNums(n-1);
}

int main(){
    int sum = sumOfNums(2);
    cout<<sum;
}
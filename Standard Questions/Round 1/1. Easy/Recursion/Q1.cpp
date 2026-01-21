// Print numbers from 1 to N
#include<iostream>
using namespace std;

void printNos(int n){
    if(n == 0) return;

    printNos(n-1);
    cout<<n<<" ";
}

int main(){
    printNos(7);
}
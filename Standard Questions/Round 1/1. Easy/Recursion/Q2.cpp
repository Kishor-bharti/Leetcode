// Print numbers from N to 1
#include<iostream>
using namespace std;

void printNos(int n){
    if(n == 0) return;

    cout<<n<<" ";
    printNos(n-1);
}

int main(){
    printNos(10);
}
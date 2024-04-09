#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i<n ;i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<isPrime(n);
    if(isPrime(n)) {
        cout<<"number is prime";
    }
    else {
        cout<<"not prime";
    }
}
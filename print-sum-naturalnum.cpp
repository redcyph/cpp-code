#include <bits/stdc++.h>
using namespace std;

int printsum(int n) {
    if (n==0) return 0;
    return n + printsum(n-1);
}

int main() {
    int num;
    cout<<"enter :";
    cin>>num;
    cout<<printsum(num);
    return 0;
}
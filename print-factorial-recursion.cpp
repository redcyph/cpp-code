#include <bits/stdc++.h>
using namespace std;

int printfact(int n) {
    if (n==0) return 1;

    return n * printfact(n-1);
}

int main() {
    int num;
    cout<<"enter :";
    cin>>num;
    cout<<printfact(num)<<endl;
    return 0;
}
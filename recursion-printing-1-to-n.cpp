#include <bits/stdc++.h>
using namespace std;

void print2(int i, int n) { //for printing 1 to n
    if(i<1) return;
    print2(i-1,n);
    cout<<i<<endl;
}



int main() {
    int n;
    cout<<"enter :";
    cin>>n;
    print2(n, n);
    return 0;
}
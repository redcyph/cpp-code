#include <bits/stdc++.h>
using namespace std;

void print1(int i, int n) {     //print numbers upto n
    if (i>n) return;
    cout<<i<<endl;              //print this line after the function "print1" to print reverse number using the backtracking
    print1(i+1,n);
}

int main() {
    int n;
    cout<<"enter the number :";
    cin>>n;

    print1(1, n);
    return 0;
}
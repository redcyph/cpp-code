#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout<<"enter :";
    cin>>num;
    int fact = 1;
    for (int i=1; i<=num; i++) {
        fact=fact*i;
    }
    cout<<fact<<endl;

    if (fact%10==0) cout<<"trailing zeroes !";
    else cout<<"not trailing zeroes !";
}

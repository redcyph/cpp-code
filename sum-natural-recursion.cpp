#include <bits/stdc++.h>
using namespace std;

void printsum(int i, int sum) {     //parameterised way 
    if (i<1) {
        cout<<sum<<endl;
        return;
    }

    printsum(i-1,sum+i);
}

int main() {
    int num;
    cout<<"enter :";
    cin>>num;
    printsum(num, 0);
    return 0;
}
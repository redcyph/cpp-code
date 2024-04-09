#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter :";
    cin>>n;
    int arr[n];

    cout<<"enter the numbers :"<<endl;
    for (int i=0; i<=n-1; i++) {
        cin>>arr[i];
    }

    int hash[13] = {0};
    for (int i=0; i<n; i++) {
        hash[arr[i]] += 1;          //this counts the numbers and increase the the count by one everytime it founds the numbers 
    }

    int q;
    cout<<"how many numbers you want to search :";
    cin>>q;

    while (q--) {
        cout<<"enter the number "<</*q<<*/endl;
        int number;
        cin>>number;
        cout<<"the number of times "<<number<<" appeared in the array :"<<hash[number]<<endl;
    }
    return 0;
}
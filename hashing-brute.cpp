#include <bits/stdc++.h>
using namespace std;

void checkNum(int arr[], int b, int n) {
    int count = 0;
    for (int i=0; i<n; i++) {
        if (arr[i]==b) count++;
    }

    cout<<"number of "<<b<<" present's in the array : "<<count;

}

int main() {
    int n, b;
    cout<<"enter the total numbers :";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers in array :"<<endl;

    for (int i=0; i<=n-1; i++) {
        cin>>arr[i];
    }

    cout<<"enter the number you want to check present in array : ";
    cin>>b;
    checkNum(arr, b, n);
}
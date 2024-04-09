#include <bits/stdc++.h>
using namespace std;

void revArray(int i, int arr[], int n) {
    if(i>=n/2) return;

    swap(arr[i], arr[n-i-1]);
    revArray(i+1, arr, n);
}

int main() {
    int n;
    cout<<"enter the total numbers :";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers :"<<endl;
    for (int i=0; i<=n-1; i++){
        cin>>arr[i];
    }

    revArray(0, arr, n);

    cout<<"reversed array :"<<endl;
    for (int i=0; i<=n-1; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
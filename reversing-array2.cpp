#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    cout<<"reversed array :"<<endl;
    for(int i=0; i<=n-1; i++) {
        cout<<arr[i]<<" ";
    }
}

void revArray(int arr[], int start, int end) {
    if(start<end) {
        swap(arr[start], arr[end]);
        revArray(arr, start+1, end-1);
    }

    
}

int main() {
    int n;
    cout<<"enter total number :";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers :"<<endl;
    for (int i=0; i<=n-1; i++) {
        cin>>arr[i];
    }

    revArray(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}
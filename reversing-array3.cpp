#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    cout<<"reversed array :"<<endl;
    for (int i=0; i<=n-1; i++) {
        cout<<arr[i]<<" ";
    }
}

void revArray(int arr[], int n) {
    int p1=0, p2=n-1; 
    while(p1<p2) {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }

    printArray(arr, n);
}

int main() {
    int n;
    cout<<"enter total number :";
    cin>>n;
    int arr[n];
    cout<<"enter the numbers :"<<endl;
    for(int i=0; i<=n-1; i++) {
        cin>>arr[i];
    }
    revArray(arr, n);
    return 0;
}
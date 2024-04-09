#include <bits/stdc++.h>
using namespace std;

void printArray(int ans[], int n) {
    cout<<"printing the reversed array :";
    for (int i=0; i<=n-1; i++) {
        cout<<ans[i]<<" ";
    }
}

void reverseArray(int arr[], int n) {
    int ans[n];
    for (int i=n-1; i>=0; i--) {
        ans[n-i-1]=arr[i];
    }

    printArray(ans, n);

}

int main() {
    int n;
    cout<<"total numbers :"<<endl;
    cin>>n;
    int arr[n];
    // int arr[] = {5, 4, 3, 2, 1};

    cout<<"enter the numbers in the array :"<<endl;
    for(int i=0; i<=n-1; i++) {
        cin>>arr[i];
    }
    reverseArray(arr, n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    int l=0,r=n-1;
   if(n==1&& arr[0]==1)
    return 0;
    while(l<r){
    int mid=l+(r-l)/2;
    if(arr[mid]==0&&arr[mid+1]==1){
    return mid+1;}
    else if(arr[mid]==1&&arr[mid-1]==0){
    return mid;}
    else if(arr[mid]==0&& arr[mid+1]==0){
     l=mid+1;}
    else
    r=mid;
    }
    return -1;
}
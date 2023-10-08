//K’th Largest Element in Unsorted Array
#include<bits/stdc++.h>
using namespace std;
int main (){
    //nry_code();
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    sort(arr,arr+n);
    cout << arr[n-k];
    return 0;
}

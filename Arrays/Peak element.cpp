//Find a peak element which is not smaller than its neighbours
#include<bits/stdc++.h>
using namespace std;
int main (){
    //nry_code();
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    for (int i=1;i<n-1;i++){
        if (arr[i]>arr[i-1] and arr[i]>arr[i+1]){
            cout << arr[i] << " ";
        }
    }
    return 0;
}

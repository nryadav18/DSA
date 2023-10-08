//Sort the array of 0s, 1s, and 2s
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
    int zero = count(arr,arr+n,0);
    int one  = count(arr,arr+n,1);
    int two  = count(arr,arr+n,2);
    for (int i=0;i<zero;i++){
        arr[i] = 0;
    }
    for (int i=zero;i<zero+one;i++){
        arr[i] = 1;
    }
    for (int i=zero+one;i<zero+one+two;i++){
        arr[i] = 2;
    }
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

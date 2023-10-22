//Move All Zeros to Beginning of Array
#include<bits/stdc++.h>
using namespace std;
int main (){
    //nry_code();
    long long int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    for (int i=n-1;i>=0;i--){
        if (arr[i]!=0){
            swap(arr[i],arr[j]);
            j--;
        }
    }
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

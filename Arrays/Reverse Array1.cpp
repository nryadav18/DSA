//Write a program to reverse the array
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
    reverse(arr,arr+n);
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

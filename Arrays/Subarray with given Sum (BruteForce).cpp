//SubArray with given Sum (Brute Force)
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
    int tar;
    cin>>tar;
    int sum;
    for (int i=0;i<n-1;i++){
        sum = arr[i];
        for (int j=i+1;j<n;j++){
            sum += arr[j];
            if (sum==tar){
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "No SubArray was Found";
    return 0;
}

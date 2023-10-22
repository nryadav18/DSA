//SubArray with given Sum (Sliding Window)
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
    int i=1,j=0,sum=arr[0];
    while (i<n){
        sum+=arr[i];
        while (sum > tar){
            sum = sum - arr[j];
            j++;
        }
        if (sum==tar){
            cout << j << " " << i << endl;
            return 0;
        } 
        i++;
    }
    cout << "No SubArray was Found";
    return 0;
}

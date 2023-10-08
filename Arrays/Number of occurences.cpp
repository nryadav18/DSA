//Find the occurrence of an integer in the array
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
    int x;
    cin>>x;
    int cnt=0;
    for (int i=0;i<n;i++){
        if (arr[i]==x){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

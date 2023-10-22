//Union of Two Arrays
#include<bits/stdc++.h>
using namespace std;
int main (){
    //nry_code();
    int m,n;
    cin>>m>>n;
    int arr[m],brr[n];
    for (int i=0;i<m;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cin>>brr[i];
    }
    int res[m+n];
    for (int i=0;i<m;i++){
        res[i] = arr[i];
    }
    for (int i=m;i<m+n;i++){
        res[i] = brr[i-m];
    }
    sort(res,res+m+n);
    for (int i=0;i<m+n;i++){
        if (res[i]!=res[i+1]){
            cout << res[i] << " ";
        }
    }
    return 0;
}

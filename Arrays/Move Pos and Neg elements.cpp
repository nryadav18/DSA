//Move all the negative elements to one side of the array
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
    int cnt_pos = 0 , cnt_neg = 0;
    for (int i=0;i<n;i++){
        if (arr[i]>=0) cnt_pos++;
        else cnt_neg++;
    }
    int pos[cnt_pos];
    int neg[cnt_neg];
    int x=0,y=0;
    for (int i=0;i<n;i++){
        if (arr[i]>=0){
            pos[x] = arr[i];
            x++;
        }
        else{
            neg[y] = arr[i];
            y++;
        }
    }
    for (int i=0;i<x;i++){
        arr[i] = pos[i];
    }
    for (int i=x;i<x+y;i++){
        arr[i] = neg[i-x];
    }
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}

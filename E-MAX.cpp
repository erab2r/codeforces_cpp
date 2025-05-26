#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    } 
    int mx = INT_MIN;
    for(i =0;i<n;i++){
        // if(a[i]>mx){
        //     mx = a[i];
        mx = max(a[i],mx);
        }
         cout << mx <<endl;

    return 0;
    }
    
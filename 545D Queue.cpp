#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int n;
    long long arr[100005];
    cin>>n;
    int sum=0;
    int cn=0;
    
    for (int i=0;i<n;i++)cin>>arr[i];
    sort (arr,arr+n);
    
    for (int i=0;i<n;i++){
        if (sum<=arr[i]){sum+=arr[i];cn++;}
        
    
    }
    
    cout<<cn;
}

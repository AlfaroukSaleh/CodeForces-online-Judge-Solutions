#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;


int main () {
    int n;
    long long arr[100005];int cnt=0;
    cin>>n;
    
    
    for (int i=0;i<n;i++){
        cin >>arr[i];
    }
    sort (arr,arr+n);
    
    for (int i=0;i<n-2;i++){
        if (arr[i]+arr[i+1]>arr[i+2])
        {cnt=1;break;}
            
    }
    
           cnt==1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;

}

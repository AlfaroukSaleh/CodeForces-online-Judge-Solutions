#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int pow2 [30]; int m=1;
    for (int i=0;i<30;i++) {
        m*=2;
        pow2[i]=m; 
    }
    
    int n;
    long long arr[100005];
    cin>>n;
    
    for (int i=0;i<n;i++)
        cin>>arr[i];
    
    sort (arr,arr+n);
    
    long long sum=0;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<30;j++){
            int key = pow2[j]-arr[i];
            int low = lower_bound(arr+i+1,arr+n,key)-arr;
            int cnt=0;
            if (arr[low]==key){
                int up = upper_bound(arr+i+1,arr+n,key)-arr;
                 cnt =up-low;
            
            }
            
            sum+=cnt;
            
            
            
            }
        
        }
    
cout<<sum;
    

    
    
    
}

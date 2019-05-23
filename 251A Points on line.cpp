#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    long long d;
    long long arr[1000000];
    long long sum=0;
    cin>>n;
    cin>>d;
    
    for (int i=0;i<n;i++)
        cin>>arr[i];
    
    for (int i=0;i<(n-2);i++){
        long long pos= upper_bound(arr+i,arr+n,arr[i]+d)-arr;
        pos--;
        sum+=(pos-i)*(pos-i-1)/2;
        
    }
    cout<<sum;
            



}

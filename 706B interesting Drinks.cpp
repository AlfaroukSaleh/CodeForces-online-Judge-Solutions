#include <bits/stdc++.h>
using namespace std;
int main () {
    int shops;
    int shopprice[1000005];
    int daynum;
    long long coins[100005];
    cin>>shops;
    for (int i=0;i<shops;i++)cin>>shopprice[i];
    
    cin>>daynum;
    for (int i=0;i<daynum;i++)cin>>coins[i];
    
    sort(shopprice,shopprice+shops);
    
    for (int i=0;i<daynum;i++){
        
        int sum= upper_bound(shopprice,shopprice+shops,coins[i])-shopprice;
        cout<<sum<<endl;
            
       

    }
    
    return 0;
}

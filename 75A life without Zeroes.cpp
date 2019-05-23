#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int main () {
    long long x;
    long long y;
    int x1 = 1;
    int xx=0;
    int y1=1;
    int yy=0;
    int sum1=1;
    int summ=0;
    cin>>x>>y;
    
    long long sum =x+y;
    long long sum2;
    
    for (int i=0;i<1000000000;i++){
        if (x==0) break;
        if (x%10!=0){
            xx+=((x%10) *x1);
            x1*=10;
        }
        x/=10;
        
    }
    
    for (int i=0;i<1000000000;i++){
        if (y==0) break;
        if (y%10!=0){
            yy+=((y%10) *y1);
            y1*=10;
        }
        y/=10;
        
    }
    
    for (int i=0;i<1000000000;i++){
        if (sum==0) break;
        if (sum%10!=0){
            summ+=((sum%10) *sum1);
            sum1*=10;
        }
        sum/=10;
        
    }
    
    
    
    sum=xx+yy;
    if (sum==summ) cout<<"YES";
    else cout<<"NO";
}

#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int main () {
    int y,k,n;int x;
    cin>>y>>k>>n;
    int i=k-y%k;
    int top=n-y;
    if (i>top) cout<<"-1";
    else {
    for ( i;i<=top;i+=k){
        printf("%d ",i);
       
    }}

   
}

#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int array[100];
    
    for (int i=0;i<n;i++)cin>>array[i];
    
    if (array[n-1]==15)cout<<"DOWN";
    else if (array[n-1]==0)cout<<"UP";
    else if (n==1) cout<<"-1";
     else if (array[n-1]>array[n-2]) cout<<"UP";
   else if (array[n-1]<array[n-2])cout<<"DOWN";
    

}

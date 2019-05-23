#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int main (){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int max=0;
    for (int i=0;i*a<=n;i++)
    {
        for (int j=0;i*a+j*b<=n;j++)
        {
           int k=(n-(a*i+b*j))/c;
            if ((a*i+b*j+c*k)==n) {
                if ((i+j+k)>=max) max=i+j+k;
            }
           
       
            
        
        }
       
    
    }
    cout<<max;

}

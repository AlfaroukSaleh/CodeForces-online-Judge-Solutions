#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
int main () {
    
    int x;int flag=1;
    cin>>x;
    char array [1005];
    cin>>array; int s=strlen(array);
    int array2[1005];
    char str[1005]; int m=0;
    for (int i=0;i<s;i++)
    {
        array2[i]=count(array,array+s,array[i]);
        if (count(str,str+1000,array[i])==0){
            for (int j=0;j<array2[i]/x;j++){
                str[m]=array[i];
                m++;
            }
        }
    }
    
//for (int i=0;i<m;i++)cout<<str[i];    
  
     for (int i=0;i<s;i++){
        if(array2[i]%x!=0) {flag=0; break;}
    }
    
    
   
    int t=x;
    if (flag==0){
        t=0; cout<<"-1";
    }
    
    while (t--){
    for (int i=0;i<m;i++){
        cout<<str[i];
    }}
    
   
}

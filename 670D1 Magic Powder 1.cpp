#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include<string.h>
#include<list>
#include<set>
#include<map>
#include<algorithm>
using namespace std;

int ok (int A[],int B[],int n,int k,int cakes){
    for (int i=0;i<n;i++){
        if (A[i]*cakes>B[i])
            if (k>=(A[i]*cakes-B[i]))
                k-=(A[i]*cakes-B[i]);
            else return 0;
    }
    return 1;
    

}


int main () {
    
    int A[1005],B[1005],n,k;
    scanf("%d%d",&n,&k);
    
    for (int i=0;i<n;i++)
        scanf("%d",A+i);
    for (int i=0;i<n;i++)
        scanf("%d",B+i);
    
    for (int i=0;i<=2000;i++)
        if (ok(A,B,n,k,i)==0)
            if (i==0)return printf("%d",i),0;
        
            else return printf("%d",i-1),0;
        
    return printf("%d",2000),0;


}

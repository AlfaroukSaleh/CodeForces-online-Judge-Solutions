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
    int A[100005],B[100005],n,k;

int ok (int A[],int B[],int n,int k,long long cakes){
    for (int i=0;i<n;i++){
        if (A[i]*cakes>B[i])
            if (k>=(A[i]*cakes-B[i]))
                k-=(A[i]*cakes-B[i]);
            else return 0;
    }
    return 1;
    

}

long long BinarySearch (){
    long long lo=0,hi=2e9,mid;
    //int a=2000;
    while (hi-lo>0){
        mid=(lo+hi+1)/2;
        if (ok(A,B,n,k,mid))lo=mid;
        else hi=mid-1;
    }
    return lo;
}

int main () {
    
    scanf("%d%d",&n,&k);
    
    for (int i=0;i<n;i++)
        scanf("%d",A+i);
    for (int i=0;i<n;i++)
        scanf("%d",B+i);
    
    return cout<<BinarySearch(),0;


}

#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
int main () {

int m,n;
long long arr1[200005];
long long arr2[200005];

cin>>n>>m;

for (int i=0;i<n;i++)
    cin>>arr1[i];

for (int i=0;i<m;i++)
    cin>>arr2[i];
sort(arr1,arr1+n);

for (int i=0;i<m;i++)
    cout<<upper_bound(arr1,arr1+n,arr2[i])-arr1<<" ";
}

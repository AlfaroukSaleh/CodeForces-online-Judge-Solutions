#include <bits/stdc++.h>

using namespace std;
int main () {
    int x;
    int array[105];

    cin>>x;
    for (int i=0;i<x;i++){
        cin>>array[i];
    }
sort (array,array+x);
 for (int i=0;i<x;i++){
        cout<<array[i]<<" ";
    }
}

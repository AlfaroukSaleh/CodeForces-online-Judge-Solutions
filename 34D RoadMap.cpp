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

const int N=1e5+5,M=1e6+5;
int head[N],nxt[M],to[M];
int ne=0,v,n,m,gb,r1,r2;
int vis[N];
int nw [M];
void init(){
    memset (head,-1,n*sizeof head[0]);
}
void init2(){
    memset (vis,0,n*sizeof vis[0]);
}
void addEdge(int f,int t){
    to[ne]=t;
    nxt[ne]=head[f];
    head[f]=ne++;
}

void addBiEdge(int a,int b){
    addEdge(a,b);
    addEdge(b,a);
}

void Dfs(int u){
    
    
if (vis[u]){return ;}    


vis[u]=1;
    for (int k=head[u];~k;k=nxt[k]){
        v=to[k];
       // if (v==u2)
        //cout<<u+1<<" ";
        if (vis[v]==0)
        nw[v]=u;
        Dfs(v);
    }
    
}

int main (){
    scanf("%d %d %d",&n,&r1,&r2);
    init();
    int x=n-1;
    for (int i=0;i<n;i++){
        int sc;
        if (i==(r1-1))continue;
        scanf("%d",&sc);
        addBiEdge(i,(sc-1));
    }
    
  

       Dfs(r2-1);
       for (int i=0;i<n;i++){
           if (i==r2-1)continue;
           cout<<nw[i]+1<<" ";
       }
      

}

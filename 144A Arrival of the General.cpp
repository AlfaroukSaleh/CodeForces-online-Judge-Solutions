#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;



int main () {
    int n ;
    cin>>n;
    int array[105];
    int max=0; int maxcnt,mincnt;
    for (int i=0;i<n;i++){
        cin>>array[i];
    }
    
for (int i=0;i<n;i++){
    if (array[i]>max){max=array[i];  maxcnt=i; }
}
    int min=max;
    for (int i=0;i<n;i++){
    if (array[i]<=min){min=array[i]; mincnt=i;}
}
    
    if (maxcnt>mincnt)n--;
    else if (mincnt==0)mincnt++;
    int total= (abs(0-maxcnt)+abs((n-1)-mincnt));
    
    cout<<total;
  
    
    
}

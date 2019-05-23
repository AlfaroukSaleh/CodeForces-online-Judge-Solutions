#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main () {
    int array [105];
    int bulb,button;
    int n;
    int x,y; int sum=0;
    cin>>button>>bulb;
     for (int i=0 ; i<bulb;i++){array[i]=abs(rand());
     if (array[i]==0) array[i]++;
     }
     
    for (int i=0 ; i<button;i++){
        cin >>n;
        for (int j=0;j<n;j++){
            cin>>x;
        array[x-1]=0;}
        
    }
    
    for (int i=0 ;i<bulb;i++){
        sum+=array[i];
    
    }
    if (sum==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
       
   
 
    return 0;
}

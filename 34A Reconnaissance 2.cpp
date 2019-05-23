#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main (){
    int arr[105];
    int n;
    int x,y;
    int mini=10000;
    cin>>n;
    
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if ((i==0&&j==n-1)) {
            if (abs(arr[i]-arr[j])<mini  ){
                mini=abs(arr[i]-arr[j]);
                x=i+1;y=j+1;
            }
            }
            
            else if (j-i==1 ){
                
            if (abs(arr[i]-arr[j])<mini  ){
                mini=abs(arr[i]-arr[j]);
                x=i+1;y=j+1;
            }
            }
        
        }
    }
    
   cout<<x <<" "<<y; 
   return 0;
}

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main () {
    int array [105];
    int n;
    cin>>n;
    int x,y; int sum=0;

    for (int i=0 ; i<n-1;i++){
        cin >>array[i];
    }
    
            cin>>x>>y;

    for (int j=x;j<y;j++){
        sum+=array[j-1];
    }
    cout<<sum<<endl;
 
    return 0;
}

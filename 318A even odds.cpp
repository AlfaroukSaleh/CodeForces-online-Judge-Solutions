#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;

int main (){
    long long n;
    cin>>n;
    long long k;
    cin>>k;
    
    if (k<=(n+1)/2)
    {
        cout<<2*k -1;
    }
    else cout<<((k - (n+1)/2 ) *2);
   return 0; 
}

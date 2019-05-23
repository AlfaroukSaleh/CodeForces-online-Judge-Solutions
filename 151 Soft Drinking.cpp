#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;


int main () {
    int n;
    int k;
    int l;
    int c;
    int d;
    int p;
    int nl;
    int np;
    
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = k*l /nl;
    int limes= c*d;
    int salt= p/np;
    
    if (drink <=limes&&drink <=salt) cout<<drink/n;
    else if (limes <= drink && limes <=salt) cout<<limes/n;
    else cout<<salt/n;
    

}

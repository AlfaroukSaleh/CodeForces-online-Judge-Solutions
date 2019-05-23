#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;
int main () {
    int n;
    int h;
    int x;
    int width=0;
    
    cin>>n;
    cin>>h;
    while (n--){
        cin>>x;
        x>h ? width+=2 : width++;
    }
    cout<<width;

}

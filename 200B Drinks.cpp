#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;

int main (){
    cout<<fixed<<setprecision(12);
    int x;
    int sum=0;
    int m;
    cin>>x;
    int y=x;
    while (y){
        cin>>m;
        sum+=m;
        y--;
    }
    
    double fin = ((double) sum / (x*100)) * 100;
    cout<<fin<<endl;

}

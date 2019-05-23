#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;


int main (){
    int a,b,c;
    cin>>a>>b>>c;
    int array[6];
    array[0]=a+b+c;
    array[1]=a+b*c;
    array[2]=a*b+c;
    array[3]=a*(b+c);
    array[4]=a*b*c;
    array[5]=(a+b)*c;
    int max=0;
    for (int i=0;i<=5;i++){
        if (max<=array[i])max=array[i];
        
    }

cout<<max;
}

#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;

int main (){
    int n;
    cin>>n;

    int array2[2005];
    for (int i=0;i<n;i++){
        array2[i]=i+1;}

        int sum=n;
        int m=n;
    for (int i=0;i<n;i++){
        if (m >=0){
    sum=sum + (array2[i]*--m);}

    }
         cout<<sum;




     return 0;


}

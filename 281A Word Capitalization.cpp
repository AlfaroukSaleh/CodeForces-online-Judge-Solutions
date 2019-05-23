#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;
int main (){
    char array[1005];
    cin>>array;
   array[0]= toupper(array[0]);
    cout<<array;
    return 0;
}

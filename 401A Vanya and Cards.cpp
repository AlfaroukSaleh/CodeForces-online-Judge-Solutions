#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;



int main () {
    int n;
    int max;
    int array[1005];int sum=0;
    cin>>n>>max;
    for (int i=0;i<n;i++){
        cin>>array[i];
        sum+=array[i];
    }
    int final = ceil (abs((double)sum)/max);
    cout<<final;

}

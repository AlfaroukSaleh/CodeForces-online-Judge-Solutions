#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;

int main () {
    int x,y;
    cin>>x>>y;
    int max;
    if (x>=y)max=x;
    else max =y;
    int cnt=0;
    for (int i=max;i<=6;i++){
    ++cnt;
    }
    /*switch(cnt){
        case 1:{ cout<<"1/6"; break;}
        case 2: { cout<<"1/3"; break;}
                case 3: { cout<<"1/2"; break;}
                        case 4: { cout<<"2/3"; break;}
                                case 5: { cout<<"5/6"; break;}
        case 6: { cout<<"1/1"; break;}*/
    if (cnt==6)cout<<"1/1";
    else if (cnt%2==0)cout<<cnt/2<<"/"<<3;
    else if (cnt%3==00)cout<<cnt/3<<"/"<<2;
    else cout<<cnt<<"/"<<6;
        


    
    return 0;
}

#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;
int main (){
char array1 [105];
char array2 [105];

int f=1;
   
cin>>array1;
cin>>array2;
int j=strlen(array2)-1;
for (int i=0;i<strlen(array1);i++)
{
    
        if (array1[i]!=array2[j]) f=0;
        j--;
    
}
   if (f==0)cout<<"NO";
   else cout<<"YES";

   
   
    return 0;
}

#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstring>
#include<ctype.h>
using namespace std;
int main (){
    char array[1005];
    cin>>array;int found=1;
   for (int i=1;i<strlen(array);i++){
       if (islower(array[i]))found=0;
   }
      for (int i=0;i<strlen(array);i++){
          if (found!=0){
              if (isupper(array[i]))
              array[i]=tolower(array[i]);
              
              else               array[i]=toupper(array[i]);

              
          }}
              

   
   
    cout<<array;
    return 0;
}

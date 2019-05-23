#include <iostream>
using namespace std;
 
int main (){
    int x; int a; int num1=0,num2=0,num3=0,num4=0; int taxi=0;
    cin >>x;
    for (int i =0 ; i<x;i++){
        cin >>a;
        switch (a){
            case 1: {num1++; break;}
            case 2: {num2++; break;}
            case 3: {num3++; break;}
            case 4: {num4++; break;}
        }}
        
        while (num4>0){
            taxi++;
            num4--;
        }
        
        while (num3>0 && num1 >0){
          
           taxi++;
            num3--;
            num1--;
           
           }
        while (num3>0 && num1 <=0){taxi++; num3--;}
        
        
    while (num2>0){
       if (num2>1){taxi++;
            num2-=2;
            }
        
       
        
        else  if (num1>=1&&num2==1)
        {
        taxi++;
            num2--;
            num1-=2;
        }
        else if (num2==1&&num1<=0){
        taxi++;
            num2--;
        }
     
    }
    
    
    while (num1>0){
        taxi++;
        num1-=4;
    
    }

    cout<<taxi<<endl;

return 0;}

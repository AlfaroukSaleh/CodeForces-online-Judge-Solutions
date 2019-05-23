#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main (){
  
    int x;
    cin>>x;
    int x1,x2,x3,x4;
            
            x++;
            int year=x;
            
        x1=x%10;
        x=x/10;
        
        x2=x%10;
        x=x/10;
        
          x3=x%10;
        x=x/10;
        
          x4=x%10;
        x=x/10;

        
       while (x1==x2||x1==x3||x1==x4||x2==x3||x2==x4||x3==x4){
           year++;
           x=year;
           
           x1=x%10;
        x=x/10;
        
        x2=x%10;
        x=x/10;
        
          x3=x%10;
        x=x/10;
        
          x4=x%10;
        x=x/10;
        
        
    
        
        
    }
        cout<<year<<endl;
                
                
                
   
    
    return 0;


}

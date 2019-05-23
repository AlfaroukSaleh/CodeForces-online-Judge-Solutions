#include <iostream>
#include <math.h>
#include<iomanip>
using namespace std;
int main (){
  
    int num_of_rooms;
    int num_of_students;
    int capacity;
    int counter=0;
    cin >>num_of_rooms;
    
    for (int i=0;i<num_of_rooms;i++){
        cin>>num_of_students>>capacity;
        
        if ((capacity-num_of_students)>=2)
            counter++;
    }
    cout <<counter<<endl;
    
    return 0;


}

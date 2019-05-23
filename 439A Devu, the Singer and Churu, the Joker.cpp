#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;


int main(){
    int songs;
    int time;
    
    int songtime[105];
    int songsum=0;
    int songtimebreak=-10;
    cin>>songs>>time;
    
    for (int i=0;i<songs;i++){
        cin>>songtime[i];
        songsum+=songtime[i];
        songtimebreak+=songtime[i]+10;
    }
    if (songtimebreak>time)cout<<"-1";
    else {
        cout<<(time-songsum)/5;
    
    
    }
    
    
    
}

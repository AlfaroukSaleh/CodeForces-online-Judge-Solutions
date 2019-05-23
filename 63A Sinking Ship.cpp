#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include<string.h>
#include<list>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main () {
    string names[100];
    string s;
    int pr[100];
    int n;
    multimap<int,string> mp;
    cin>>n;
    
    for (int i=0;i<n;i++)
    {
        cin>>names[i];
        cin>>s;
        
        if (s.compare("captain")==0){pr[i]=4;}
        else if (s.compare("rat")==0){pr[i]=1;}
                else if (s.compare("woman")==0){pr[i]=2;}
                                else if (s.compare("child")==0){pr[i]=2;}
                                      else if (s.compare("man")==0){pr[i]=3;}


        
    
    }
    
    for (int i=0;i<n;i++){
        mp.insert(make_pair(pr[i],names[i]));
    
    }

    auto itr = mp.begin();
        for (int i=0;i<n;i++){
            cout<<itr->second<<endl;
            itr++;
        
        }
    

}

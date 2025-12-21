#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

// unordered map implemented by hashing it stores data in key value pair in random order 

int main(){
    unordered_map<string,int>map;
    map["krish"]=99;
    map["prince"]=89;
    map["gfg"]=34;
    // for( auto x: map){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    unordered_map<string,int> :: iterator itr;
    for(itr = map.begin(); itr!= map.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    return 0;
}
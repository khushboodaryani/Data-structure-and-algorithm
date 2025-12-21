#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

// unordered map implemented by hashing it stores data in key value pair in random order
// its time complexity o(1) avg, use for fast lookup

int main(){
    unordered_map<string,int>map;
    map["krish"]=99;
    map["prince"]=89;
    map["gfg"]=34;
    // for( auto x: map){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
     map.insert(make_pair("mobile",17000));

    unordered_map<string,int> :: iterator itr;
    // for(itr = map.begin(); itr!= map.end(); itr++){
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }
    string key ="gfg";
    if(map.find(key)!= map.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    key = "krish";
    map.erase(key);
    for(itr = map.begin(); itr!= map.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }


   
    return 0;
}
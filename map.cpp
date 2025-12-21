#include<iostream>
#include<map>
#include<string>

using namespace std;

//map is used to store key value pair data in ordered way its internally impleneted by red black tree
//sorted by key take less memory

int main(){
    map<string, int>marksMap;
    marksMap["ram"]= 100;
    marksMap["shyam"]= 200;
    marksMap["hari"]= 230;

    marksMap.insert({"radha",40});
    marksMap.insert({"gita",50});
    marksMap.insert({
        {"priti", 79},
        {"sipi",78}
    });
    map<string, int> :: iterator itr;
    for(itr = marksMap.begin(); itr!= marksMap.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;  
        
      }
      cout<<"size of map is"<<marksMap.size()<<endl;
      cout<<"max size of map is"<<marksMap.max_size()<<endl;
      cout<<"empty or not"<<marksMap.empty()<<endl;
      return 0;
}
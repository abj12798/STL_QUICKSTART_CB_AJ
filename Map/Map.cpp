#include<iostream>
#include<map>
#include<cstring>

using namespace std;

int main(){

  map<string,int> m;

  int N;
  cin>>N;
  for(int i = 0; i < N; ++i){


    string s;
    int val;
    cin>>s>>val;
    m.insert(make_pair(s,val));

  }


  for(auto it = m.begin(); it!= m.end(); ++it){

    cout<<(*it).first<<" : "<<(*it).second<<endl;

  }

  if(m.find("Harsh") == m.end() || m.count("Harsh") == 0)
    cout<<"Value not present"<<endl;

   m["Harsh"] = 29;

   for(auto p : m)
    cout<<p.first<<" : "<<p.second<<endl;

  return 0;
}

#include<iostream>
#include<vector>

using namespace std;

int main(){

 //ways of intializing the vector.

  vector<int> a; // in this we create an empty  vector.
  vector<int> b(10,-1); // in this way we intialize a vector with 10 values default value -1.
  vector<int> c(b.begin(),b.end()); // in this way we can copy the contents of one vetor to another while inintializing.
  vector<int> d(1,2,3,4); // in this way we create a vecto with inintialized values 1,2,3,4.


//------------------------------------------------- traversal over vector.--------------------------------------------------------//


  for(int i = 0; i < b.size(); ++i){  // by indexing.

        cout<<b[i]<<":";

  }
  cout<<endl;

  for(auto it = b.begin(); it != b.end(); ++it){

      cout<<*it<<" : ";

  }
  cout<<endl;

  for(auto x : d){
    cout<<x<<":";
  }
//--------------------------------------------------------------------------------------------------------------------------------------//
  return 0;
}

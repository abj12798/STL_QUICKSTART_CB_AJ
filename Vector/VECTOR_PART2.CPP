#include<iostream>
#include<vector>

using namespace std;

int main(){


  vector<int> d{1,2,3,4,5};


  cout<<"Number of elements:"<<d.size()<<endl; //getting the idea of number  of elements in  vector;

  cout << "Number of elements d vector can store" <<d.capacity()<< '\n'; //getting the idea number of elements this vector can store now.

  cout<<" maximum number of elements in this vector can have"<<d.max_size()<<endl; //getting the idea of maximum number of elements that vector can store.

  //-------------------------------------------Adding elements in vector-----------------------------------------------------------------//

  d.push_back(81); // Adding element at the end of a vector.

  for( auto X : d){
    cout<<X<<" ";
  }

   cout<<endl;

   //-----------------------------------------------------------------------------------------------------------------------------------//

  //------------------------------------------Removing element--------------------------------------------------------------------------//

   d.pop_back(); // removing element from the end of a vector.

   for( auto X : d){
     cout<<X<<" ";
   }
   cout<<endl;
  //------------------------------------------------------------------------------------------------------------------------------------//


  //------------------------------------------Adding element at any index--------------------------------------------------------------//

  d.insert(d.begin()+1,3,1000);

  for(auto X : d)
    cout<<X<<" ";

  cout<<endl;

  //-----------------------------------------Resiszing the vector--------------------------------------------------------------------//

  d.resize(23);
  cout<<d.capacity();
  cout<<d.size();
  for(auto X : d)
    cout<<X<<" ";

  cout<< '\n';
//------------------------------------------Resrivng memeory in vector--------------------------------------------------------------//

d.reserve(1000); // via this we stop the doubling the memeory of vector because doubling of memory of vector is a tedious task.

cout<<d.capacity()<<endl;

//-----------------------------------------deleting the vector---------------------------------------------------------------------//

d.clear(); //via this we delete the memeory allocated to std::vector;

if(d.empty())
  cout<<"vector is empty now"<<endl;





  return 0;
}

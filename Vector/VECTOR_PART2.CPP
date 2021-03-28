#include<iostream>
#include<vector>

using namespace std;

int main(){


  vector<int> d{1,2,3,4,5};


  cout<<"Number of elements:"<<d.size()<<endl; //getting the idea of number  of elements in  vector;

  cout << "Number of elements d vector can store" <<d.capacity()<< '\n'; //getting the idea number of elements this vector can store now.

  cout<< " maximum number of elements in this vector can have"<<d.max_size()<<endl; //getting the idea of maximum number of elements that vector can store.

  return 0;
}

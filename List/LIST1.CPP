#include<iostream>
#include<list>

using namespace std;
int main(){

  list<string> l1 {"AMAN","ANCHAL","ARADHANA","SADHANA"};

  l1.push_front("ANJALI"); // pushing element at the fron head of doubly linked list.
  l1.push_back("SANCHI"); //pushing element at the end of doubly linked list.

  for( auto s : l1)
    cout<<s<<"-->";

  cout<<"NULL"<<endl;

  //------------------------------Sorting the linked list-------------------------------//

  l1.sort();

  for( auto s : l1)
    cout<<s<<"-->";

  cout<<"NULL"<<endl;
//--------------------------------Reversing the linked list-----------------------------//

l1.reverse();

for( auto s : l1)
  cout<<s<<"-->";

cout<<"NULL"<<endl;


  return 0;
}

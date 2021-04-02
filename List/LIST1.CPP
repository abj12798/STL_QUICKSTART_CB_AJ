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

//--------------------------------------------------------------------------------------//

//------------------------------Removing the elements from the list---------------------//

l1.pop_front(); // removing the element from the front.

for( auto s : l1)
  cout<<s<<"-->";

cout<<"NULL"<<endl;

l1.pop_back(); //removing the element from the back.

for( auto s : l1)
  cout<<s<<"-->";

cout<<"NULL"<<endl;

//---------------------------Acessing element at head / end-----------------------------//

cout<<l1.front()<<endl;
cout<<l1.back()<<endl;

//--------------------------Removing element from the list-------------------------------//

l1.remove("ANJALI");

for( auto s : l1)
  cout<<s<<"-->";

cout<<"NULL"<<endl;
//---------------------------------------------------------------------------------------//

auto it = l1.begin();
it++;
//-----------------------Inserting an element in middle of list-------------------------//
l1.insert(it,"ABJ2714");

for( auto s : l1)
  cout<<s<<"-->";

cout<<"NULL"<<endl;
//---------------------------------------------------------------------------------------//

  return 0;
}

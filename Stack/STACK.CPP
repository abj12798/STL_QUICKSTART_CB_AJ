#include<iostream>
#include<stack>

using namespace std;

int main(){


  stack<int> s; //intialization of stack

  for(int i = 0; i < 65; ++i){
    s.push(i);
  }


  //----------------Retriving element from the top of stack----------------//


  for(int i = 0; i < 45; i++ ){
    cout<<s.top()<<" ";
}
  cout<< '\n';
//--------------------------------------------------------------------------//


//----------------------pop element fron the stack--------------------------//

while(!(s.empty()))
  s.pop();


//---------------------Checking weathe te stack is empty or not-------------//

if(s.empty())
  cout<<"Stack is empty now"<<endl;

//--------------------------------------------------------------------------//




return 0;






}

#include<iostream>
#include<queue>

using namespace std;

int main(){

  queue<int>q;

  int N;

  cin>>N;

  while(N--){

      int k;

      cin>>k;

      q.push(k);
  }

  while(q.empty() == false){

      cout << q.front() << '\n';
      q.pop();

  }








return 0;

}

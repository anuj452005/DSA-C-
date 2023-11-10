#include<iostream>
#include<queue>

using namespace std;

int main(){
//first come first out 
queue<string>q;
q.push("love");
q.push("babber");
q.push("master");
cout<<"first elemnt "<<q.front()<<endl;
q.pop();
cout<<"first elemnt "<<q.front()<<endl;

//priority queue in c++
// max heap(max elemnt will be out ) or min heap(mim elemnt will out )

priority_queue<int>maxi;   //max heap ko define karo 

priority_queue<int ,vector<int>,greater<int>>mini; //mimi heap ko define kar do
maxi.push(3);
maxi.push(5);
maxi.push(0);
maxi.push(1);
int n=maxi.size();
for(int i=0;i<n;i++){
cout<<maxi.top();
maxi.pop();
}cout<<endl;







    return 0;
}



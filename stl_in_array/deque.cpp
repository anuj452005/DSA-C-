#include<iostream>
#include<deque>


using namespace std;
int main(){
deque<int>arr;
arr.push_back(2);
arr.push_front(3);

for(int i:arr){
    cout<<i<<" ";
}
cout<<endl;

cout<<"print first  element or zero(th) index "<<arr.at(0)<<endl;// here 0 means o index 


//erase function


arr.erase(arr.begin()+1,arr.begin()+2);


cout<<"size after erase "<<arr.size()<<endl;
deque<int>brr={1,2,3,4,5};

brr.erase(brr.begin()+2,brr.begin()+4);//Remove the elements from index 2 to index 4.
for(int i:brr){
    cout<<i<<" ";
}
cout<<endl;

//note ==>> search about erase function && begian && loop 



    return 0;
}
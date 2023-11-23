#include<bits/stdc++.h>
using namespace std;

// apporach h ki ekk ekk elemnt ko naye string me dal do 
int main(){
        string str;
        cin>>str;
        vector<char>v;
       for(int i=0;i<str.size();i++){
             auto it =find(v.begin(), v.end(), str[i]);
             if(it!=v.end());
             else
             {
                v.push_back(str[i]);
             }
        }
        for(auto it:v)
        cout<<it;
        cout<<endl;
return 0;
}

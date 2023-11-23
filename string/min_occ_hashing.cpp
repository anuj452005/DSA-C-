#include<bits/stdc++.h>

using namespace std;
int has[26];// for O(n)
int main(){
string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
has[s[i]-'a']++;
    }
int ans;
    int mini=INT_MAX;
for(int j=0;j<26;j++){
if(has[j]<mini  && has[j]!=0){  // dhyan rakha ki agar has[j]!=0 nabi likho ge to ye us index ko lege ga
mini=has[j];                     // gisme zero count present hoga 
    ans=j;
}

}
  // printf("%c",ans+'a');
    cout << char(ans + 'a') << endl;


return 0;
}

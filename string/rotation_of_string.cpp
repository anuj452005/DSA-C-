#include<bits/stdc++.h>
using namespace std;

// first wale ko last me dal do first sab ko ek se left me shift kar do
// logIC 2==>>
string rotate(string &s) {
    
    // new logic
    int a=s[0];
    // shift all the element to left by one
    for(int i=1;i<s.size();i++){
        s[i-1]=s[i];
    }
    s[s.size()-1]=a;

  //  cout << s << endl;
    return s;
}

int main() {
    string s;
    cin >> s;
    string a;
    cin >> a;
    bool t = false;

    for (int i = 0; i < s.size() - 1; i++) {
        if (s == a) {
            t = true;
            break;
        }
        rotate(s);
    }

    if (t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

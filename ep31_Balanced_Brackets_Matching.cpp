#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> symbols ={ {'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};

string isbalanced(string &s){
    stack<char> st;
    for(auto bracket : s)
    {
        if(symbols[bracket]<0){
            st.push(bracket);
        }
        else{
            if(st.empty())
                return "No";
            char top=st.top();
            st.pop();
            if((symbols[top]+symbols[bracket])!=0)
                return "NO";
        }
    }
if(st.empty())
 return "Yes";
 else
 return "NO";
}
int main()
{
    int t;
    cout<<"Enter the Number of Test Cases : ";
    cin>>t;
    while (t--)
    {
        string s;
        cout<<" Enter the String ";
        cin>>s;
        cout<<isbalanced(s)<<endl;
    }
}

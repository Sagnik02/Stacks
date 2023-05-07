/*The NGE for an element is the first greater element on the right side of X,
element for which no greater element exists consider the NGE as -1*/


#include <bits/stdc++.h> 
using namespace std;
vector<int> nextGreater(vector<int> &arr, int n) {
    vector<int> ans;
    stack<int> st;

    for(int i=n-1;i>=0;i--){
        if(st.size()==0)
        {
            ans.push_back(-1);
        }
        else if(st.size()>0&&st.top()>arr[i]){
            ans.push_back(st.top());
        }
        else if(st.size()>0&&st.top()<=arr[i]){
            while(st.size()>0&&st.top()<=arr[i]){

            st.pop();
            }
            if(st.size()==0){
                ans.push_back(-1);
            } else {
                ans.push_back(st.top());
            }
            
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());

    return ans;
    
}  
int main(){
    vector<int> arr={6,3,7,3,6,2};
    int n=arr.size();
    vector <int> ans=nextGreater(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
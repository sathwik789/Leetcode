#include<stack>
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int high = asteroids.size();
        stack<int> st;
        for(int i =0;i<high;i++){
            if(asteroids[i] > 0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty() && st.top() >0 && st.top() <abs(asteroids[i])){
                    st.pop();
                }
                if(!st.empty() && st.top() == abs(asteroids[i])){
                    st.pop();
                }
                else if(st.empty() && asteroids[i] < 0){ 
                    st.push(asteroids[i]);
                }
                else if(!st.empty() && asteroids[i] < 0 && st.top() < 0){
                    st.push(asteroids[i]);
                }
            }
        }
        vector<int> ans(st.size());
        for(int i =st.size() -1;i>=0;i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};

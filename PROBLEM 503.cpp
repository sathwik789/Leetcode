class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        int nge[n];
        stack<int> st;
        for(int i = 2*n-1;i>=0;i--){
            while(!st.empty() &&st.top() <= nums[i%n]){
                st.pop();
            }
            if(i<n){
                nge[i] = st.empty() ? -1 : st.top();
            }
            st.push(nums[i%n]);
       }
       vector<int> arr;
       for(int i =0;i<n;i++){
        arr.push_back(nge[i]);
       }
       return arr;
    }
};

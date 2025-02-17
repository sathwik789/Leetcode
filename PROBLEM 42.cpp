class Solution {
public:
    int trap(vector<int>& height) {
        int total =0, leftmax =0, rightmax =0;
        int n =  height.size();
        int l =0;
        int r = n-1;
        while(l<r){
            if(height[l] <= height[r]){
                if(leftmax > height[l]){
                    total += leftmax - height[l];
                }
                else{
                    leftmax = height[l];
                }
                l = l+1;
            }
            else{
                if(rightmax > height[r]){
                    total += rightmax -height[r];
                }
                else{
                    rightmax = height[r];
                }
                r = r-1;
            }
        }
        return total;
    }
};

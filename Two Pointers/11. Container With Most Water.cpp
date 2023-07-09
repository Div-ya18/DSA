class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right = height.size()-1;
        int maxArea=0;
        while(left<right){
            int area = min(height[left],height[right]) * (right-left); // l * b 
            maxArea = max(area, maxArea);
                   
            if(height[left]<height[right]){  //move the minimum height pointer
                left++;
            }
            else {
                right--;
            }
            }
            return maxArea;
    }
};

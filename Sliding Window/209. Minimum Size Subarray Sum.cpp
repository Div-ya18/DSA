class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, window = INT_MAX, sum = 0;      //start - removes element from front when target exceeds
        for(int end=0; end<nums.size(); end++){
            sum+=nums[end];
            while(sum>=target){
                window = min (window,end - start + 1 ); //min winsow size
                sum-=nums[start]; //remove element
                start++;
            }

        }
        return window == INT_MAX ? 0 : window;
    }
};

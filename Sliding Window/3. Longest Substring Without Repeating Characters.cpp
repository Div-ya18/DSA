class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start =0, end = 0;
        int max = 0;
        set <int> st; // create a set to store unique values
        while(start<s.size()){
            if(st.find(s[start])==st.end()){ //check for the element in set
            if(start-end+1 > max)
                max = start - end + 1;
                st.insert(s[start]);
                start++;
            }
            else {
                st.erase(s[end]); // if present in set erase and increment
                end++;
            }
        }
        return max;
    }
};

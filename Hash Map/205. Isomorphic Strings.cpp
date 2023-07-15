class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1, mp2;    // e|g
        for(int i=0; i<s.size(); ++i){
            if(mp1[s[i]] && mp1[s[i]]!=t[i]) return false; //mp[e] != a
            if(mp2[t[i]] && mp2[t[i]]!=s[i]) return false; //mp[a] != e
            mp1[s[i]] = t[i]; // e - a
            mp2[t[i]] = s[i]; // a - e 
        }
            return true;
        }
};

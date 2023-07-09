class Solution {
public:
    bool isAnagram(string s, string t) {
     unordered_map <char, int> mp;
     for(auto i: s){     //inc frequency count of char in s
         mp[i]++;
     }  
    for(auto i: t){      //dec frequency count of char in t
        mp[i]--;
    }
    for(auto i: mp){  // if count != 0 then extra character are present so false
        if(i.second!=0){
            return false;
        }
    }
    return true;
    }
};

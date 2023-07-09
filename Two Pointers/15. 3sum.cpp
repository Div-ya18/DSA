
//Pointers approach to return true or false

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        sort(arr,arr+n);
        int i,m,l;
        for(i=0; i<n-1; i++){
            l=i+1;
            m=n-1;
            while(l<m){
            if(arr[l]+arr[m]+arr[i]==0)
            {
                return true;
            }
            else if(arr[l]+arr[m]+arr[i]<0){
                l++;
            }
            else 
            m--;
        }
        }
        return false;
    
    }
};


//Hash

class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
         bool ans=false;
        //set<vector<int>>st;
        for(int i=0; i<n-1;i++){
            set<int> hashset;
            for(int j =i+1; j<n; j++){
                int third = -(arr[i]+arr[j]);
                if(hashset.find(third)!=hashset.end()){
                    ans = true;
                    break;
                }
                else 
                hashset.insert(arr[j]);
            }
            if(ans) break;
        }
        return ans;
    }
};

//Print Triplets

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> st;
        vector<vector<int>> output;
        
        for(int i=0; i<n; i++){
            int l = i+1, r = n-1;
        while (l<r){
            int sum = nums[i]+nums[l]+nums[r];
            if(sum==0){
                st.insert({nums[i],nums[l],nums[r]});
                l++, 
                r--;
            }
            else if (sum<0) {
                l++;
            }
            else {
                 r--;
            }

        }
    }
for (auto it: st){
    output.push_back(it);}
return output;
}
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;  //vector to store ans
        if(root==NULL){  
            return ans;         //return empty vector
        }
        queue<TreeNode*> q;    //queue 
        q.push(root);           //initial element in queue;
        
         //vector to store elements in the level
        while(!q.empty()){
            int n = q.size();
            vector<int>level;     // get the size of queue to push elements in vector
            //store it in node and delete
            for(int i=0; i<n; i++){
            TreeNode* node = q.front();
            q.pop(); 
            if(node->left!=NULL){ q.push(node->left);}     //add left & right element to q
            if(node->right!=NULL){ q.push(node->right);}
            level.push_back(node->val);                    //push curr value to vector
            }
               
            ans.push_back(level);                    //push level wise vector to ans vector
            }
            return ans;                                   //return ans
    }
    
};

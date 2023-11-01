class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> check;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                TreeNode* frontNode = q.front();
                check[frontNode -> val]++;
                q.pop();
                if(frontNode -> left){
                    q.push(frontNode -> left);
                }
                if(frontNode -> right){
                    q.push(frontNode -> right);
                }
            }
        }
        int max = 0;
        for(auto i : check){
            if(i.second > max){
                max = i.second;
            }
        }
        vector<int> ans;
        for(auto i : check){
            if(i.second == max){
                ans.push_back(i.first);
            }
        }
        return ans; 
    }
};
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> path;
        sort(nums.begin(),nums.end());
        vector<bool>used(nums.size(),false);
        dfs(nums,res,path,used);
        return res;
        
    }
    
    
    void dfs(vector<int>& nums,vector<vector<int>> & res,vector<int>& path,vector<bool>used) {
        
        
         if(path.size()==nums.size()){
          res.push_back(path);
          return;
         }
        
        
        for(int i=0;i<nums.size();i++)
        { 
            if(used[i]!=true)
            { 
            //if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
              //continue;
            used[i]=true;
            path.push_back(nums[i]);
            dfs(nums,res,path,used);
            path.pop_back();
           used[i]=false;
           }
        
        }
    
    }

    
};

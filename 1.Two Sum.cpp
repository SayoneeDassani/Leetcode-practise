class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_set <int> s;
        vector <int> result;
        for(int i=0;i<nums.size();i++)
        {
            int temp = target -nums[i];
            
            if(s.find(temp)!=s.end())
               {
                result.push_back(temp);            
            }
              
             s.insert(temp);
        }
       return result;
    }
};

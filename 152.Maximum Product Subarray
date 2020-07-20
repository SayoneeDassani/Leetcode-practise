class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size(),i,t1,t2;
        int res=INT_MIN;
        vector<int> maxP(n);
        vector<int> minP(n);
        
        maxP[0]=minP[0]=nums[0];
         res=nums[0];
        
        for(int i=1; i<n ;i++)
        { t1=max(nums[i]*maxP[i-1],nums[i]*minP[i-1]);
        maxP[i]= max(nums[i],t1);  
         
         t1=min(nums[i]*maxP[i-1],nums[i]*minP[i-1]);
         minP[i]= min(nums[i],t1);
            
            res=max(res,maxP[i]);
        }
            
         
      return res;


    }
};

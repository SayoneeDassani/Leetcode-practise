class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n);
        
        //solve smallest sub problem
        
        dp[n-1]=nums[n-1];
        //iterate from smaller sub problem to biggest subproblem and populate the value
        for(int i=n-2;i>=0;i--)
         {//two choices
            
          //1.exclude
            dp[i]=dp[i+1];
          //2.include
            if(i+2<n)
                dp[i]=max(dp[i],nums[i]+dp[i+2]);
            else
                dp[i]=max(dp[i],nums[i]);
            
         }
        
        return dp[0];
        
        
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> colours(3,0);
         for(int i=0;i<nums.size();i++)
         {
            colours[nums[i]]++;
         }
         int j=0;
         for(int i=0;i<=2;i++)
         {
             int occ=colours[i];
             while(occ--)
             {
                 nums[j++]=i;
             }
         }
    }
};

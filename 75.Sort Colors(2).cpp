class Solution {
public:
    
  /*  void swap(int a,int b)
    {
        int temp=a;
        a=b;
        b=temp;
    }*/
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high)
        {
            int temp=nums[mid];
             switch(nums[mid])
             {
                 case 0: 
                     swap(nums[mid++],nums[low++]);
                     break;
                     
                case 1: 
                     mid++;
                     break;
                     
                 case 2: 
                     swap(nums[mid],nums[high--]);
                     break;
                     
             }
        }
        /*cout<<"[";
        for(int i=0;i<nums.size()-1;i++)
        {
            cout<<nums[i]<<",";
        }
        cout<<"]";*/
    }
};

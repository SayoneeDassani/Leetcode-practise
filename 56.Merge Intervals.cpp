class Solution {
public:
      /*function comparator(pair<int ,int> a,pair<int ,int> b)
      { 
          return (a->first<b->first)
              
      }*/ 
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size() == 0)
            return intervals;
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> result;
        stack < vector<int> > s;
        
        int n=intervals.size();
        s.push(intervals[0]);
        
        for(int i=1;i<n;i++)
        {
            //s.push(intervals[i]);
            
            vector<int> res=s.top();
            
            if( res[1]<intervals[i][0])
              s.push(intervals[i]);
            
            else if(res[1] >= intervals[i][0])
            {   vector <int> temp;
                s.pop();
                temp.push_back(res[0]);
                temp.push_back(max(intervals[i][1] , res[1]));
                s.push(temp);
            }
        }
        //int j=0;
        while(!s.empty())
        {
            result.push_back(s.top());
            s.pop();
        }
         return result;
        
    }
};

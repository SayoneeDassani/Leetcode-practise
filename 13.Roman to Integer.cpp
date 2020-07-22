class Solution {
public:
    int romanToInt(string s) {
        
        map <char,int> m;
        m.insert(pair < char , int> ('I',1));
         m.insert(pair < char , int> ('V',5));
         m.insert(pair < char , int> ('X',10));
         m.insert(pair < char , int> ('L',50));
         m.insert(pair < char , int> ('C',100));
         m.insert(pair < char , int> ('D',500));
         m.insert(pair < char , int> ('M',1000));
        /*m.push('V',5);
        m.push('X',10);
        m.push('L',50);
        m.push('C',100);
        m.push('D',500);
        m.push('M',1000);*/
        
        int l=s.length();
        int res= m[s[l-1]];
        //return res;
        for(int i=l-2;i>=0;i--)
        {
            if(m[s[i]]>=m[s[i+1]])
                res+=m[s[i]];
            
            else
                res-=m[s[i]];
                       
        }
            return res;
        
        
        
    }
};

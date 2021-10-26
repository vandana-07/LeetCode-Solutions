class Solution {
public:
    vector<int> intersect(vector<int>& nm1, vector<int>& nm2) {
        
        int si = nm.size();
        vector<int>ans;
        map<int,int>m;
        
        for(int i =0;i<si;i++)
        {
            m[nm1[i]]++;
        }
        
        for(int i=0;i<nm2.size();i++)
        {
            if(m[nm2[i]]>0)
                
            {
                ans.push_back(nm2[i]);
                m[nm2[i]]--;
            }
                
        }
        
        
       return ans;
        
     
        
    }
};
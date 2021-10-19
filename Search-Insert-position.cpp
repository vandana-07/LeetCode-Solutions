class Solution {
public:
    int searchInsert(vector<int>& nm, int tar) {
       
        int l = 0, h = nm.size() - 1, md = 0;
        
        while(l<=h)
        {
            int md = l + (h-l)/2;
        
            
          if(nm[md]<tar)
            l=md+1;
            
            else
                h = md-1;
         
        }
        return l;
    }
};
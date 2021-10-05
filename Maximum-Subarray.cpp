class Solution {
public:
    int maxSubArray(vector<int>& nm) {
     	if(nm.size()==0) return 0;
        
        int sm = nm[0], mx = nm[0];
        
        for(int i = 1 ; i<nm.size() ; i++)
        {
            sm = max(nm[i], sm+nm[i]);
            
            mx = max(mx,sm);
            
        }
        
        //Kdanes algo
        //Approach used: Sliding Window
        
        return mx;
        
    }
};
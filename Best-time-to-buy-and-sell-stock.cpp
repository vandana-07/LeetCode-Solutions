class Solution {
public:
    int maxProfit(vector<int>& v) {
        
        int pro = 0;
        int mn = v[0];
        
        for(int i=1;i<v.size();i++)
        {
            mn = min(v[i],mn);
            pro = max(pro, v[i] - mn);
            
//         You do not require min from the back, so just keep finding min to the end of the array and check for maximum profit
        }
        
        return pro;
        
    }
};
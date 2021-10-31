class Solution {
public:
    int minOperations(vector<int>& v) {
        
        int cnt =0;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<=v[i-1])
            {
                int chg = v[i-1] - v[i] + 1;
                cnt += chg;
                v[i] += chg;
            }
        }
        
        return cnt;
    }
};
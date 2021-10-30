class Solution {
public:
    int minOperations(vector<int>& v) {
        
        int cnt =0;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<=v[i-1])
            {
                int cg = v[i-1] - v[i] + 1;
                cnt += cg;
                v[i] += cg;
            }
        }
        
        return cnt;
    }
};
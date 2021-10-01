class Solution {
public:
    int singleNumber(vector<int>& nums) {
    
        map<int,int> m;
        
        for(int i: nums)
        {
            m[i]++;
        }
        
        for(auto i: m)
        {
            if(i.second == 1)
                return i.first;
        }
        
        return 0;
    }
};
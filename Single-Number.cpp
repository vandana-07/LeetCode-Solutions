class Solution {
public:
    int singleNumber(vector<int>& nums) {
    
        map<int,int> mp;
        
        for(int i: nums)
        {
            mp[i]++;
        }
        
        for(auto i: mp)
        {
            if(i.second == 1)
               x return i.first;
        }
        
        return 0;
    }
};
class Solution {
public:
    int singleNumber(vector<int>& v) {
    
        map<int,int> mp;
        
        for(int i: v)
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
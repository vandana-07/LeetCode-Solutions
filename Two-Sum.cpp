class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
      
        vector<int> ans;
        map<int,int> m;
        
        
        for(int i = 0; i < nums.size();i++)
        {
            int check = tar - nums[i];
            
          
            
            if(m.count(check))
            {
                ans.push_back(m[check]);
                ans.push_back(i);
           
               return ans;
            }
            
            else
            m[nums[i]] = i;
            
        }
//Count function counts the number of occurences of an element in the complete array
//I have used map to check whether the other number is present or not
      return ans;
    }
};
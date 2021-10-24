class Solution {
public:
    vector<int> plusOne(vector<int>& dig) {
        
      int m=dig.size(),car=1;
        
        for(int i=m-1;i>=0;--i){
            
            int x = dig[i]+car;
            dig[i]=x%10;
            car = x/10;
            if(car==0) break;
        }
        if(car>0) 
            dig.insert(dig.begin(), car);
        return dig;
        
    }
};
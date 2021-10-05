class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        
        
     int i = m - 1, j = n - 1, k = (n+m)-1;
        
        
        
while(i>=0&&j>=0){
   
if(v2[j]>=v1[i])
{
v1[k] = v2[j];
j--;k--;
}
    
    else
    {
    v1[k] = v1[i];
        i--;k--;
    }
    

}

        while(j>=0)
        {
            v1[k] = v2[j];
            
            k--;j--;
        }
        
    }

};
class Solution {
public:
    bool isValid(string st) {
        
        stack <char> s;
        
       for(int i=0;i<st.size();i++)
       {
           
           if(st[i] == '(' ||st[i] == '[' || st[i] == '{')
           {
               s.push(st[i]);
           }
           
           else
           {
               if(s.empty()) return false;
               
               if(st[i] == ')' && s.top()!= '(') return false;
               if(st[i] == ']' && s.top()!= '[') return false;
               if(st[i] == '}' && s.top()!= '{') return false;
               
               
               s.pop();
           }
       }
           
           return s.empty();

    
        
    }
};
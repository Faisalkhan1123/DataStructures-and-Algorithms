class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;
        stack<int>s;
        int n=prices.size();
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                v.push_back(prices[i]);
            }
            else if(!s.empty() and prices[i]>=s.top()){
                v.push_back(prices[i]-s.top());
            }
            else if(!s.empty() and s.top()>prices[i]){
                while(!s.empty() and s.top()>prices[i]){
                    s.pop();
                }
                if(s.empty()){
                    v.push_back(prices[i]);
                }
                else{
                    v.push_back(prices[i]-s.top());
                }
            }
          s.push(prices[i]);  
    }
        reverse(v.begin(),v.end());
        return v;
    }
};

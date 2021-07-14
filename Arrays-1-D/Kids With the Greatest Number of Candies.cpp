class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxvalue=INT_MIN;
        for(int i=0; i<candies.size() ; i++) {
            
            maxvalue=max(maxvalue, candies[i]) ;
    }
        vector<bool> result;
        for(int i=0;i<candies.size() ;i++) {
            if(candies [i]+extraCandies>=maxvalue) {
                result.push_back(true) ;
            }
            else{
                result.push_back(false) ;
            }
        }
        return result;
    }
};

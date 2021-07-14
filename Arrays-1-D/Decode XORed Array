class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v={first};
    for(int i=0;i<encoded.size();i++) {
        v.push_back(v[i]^encoded[i]);
    }
    return v;
    
    }
};

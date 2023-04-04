class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>mp;
        int ct=0;
        for(auto it:s){
            if(mp[it]!=0){
                mp.clear();
                ct++;
            }
            mp[it]++;
        }

        return ct+1;
    }
};
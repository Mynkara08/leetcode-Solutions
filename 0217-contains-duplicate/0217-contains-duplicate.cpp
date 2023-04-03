class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ct=0;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>=2) ct++;
            cout<<it.second;
        }
        if(ct>0) return true;
        else return false;
    }
};
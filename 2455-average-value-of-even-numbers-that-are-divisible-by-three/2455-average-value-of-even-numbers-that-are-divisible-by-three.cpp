class Solution {
public:
    int averageValue(vector<int>& nums) {
        int ct=0,sum=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%6==0){
                sum+=nums[i];ct++;
            }
        }
        if(ct==0) return 0;
        else return sum/ct;
    }
};
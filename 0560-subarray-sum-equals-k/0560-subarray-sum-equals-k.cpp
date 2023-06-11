class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
      //  mp.insert({0,1});
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k)
            ans++;
            int rem_sum=sum-k;
            if(mp.find(rem_sum)!=mp.end())
            ans+=mp[rem_sum];
            mp[sum]++;
        }
     return ans;
    }
};
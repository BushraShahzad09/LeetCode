class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //brute force using map
       /* unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>nums.size()/2)
            return it.first;
        }
        return -1;*/
        int count=0,ele;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                ele=nums[i];
                count=1;
            }
            else if(ele==nums[i]) count++;
            else count--;
        }
        int count_op=0;
        for(int i=0;i<nums.size();i++)
        {
            if(ele==nums[i])
            count_op++;
        }
        if(count_op>nums.size()/2)
        return ele;
        return -1;
        
    }
};
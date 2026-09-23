class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int ans=1;
        int count=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[j]+1){
                count++;
                ans=max(count,ans);
            }
            else if(nums[i]==nums[j]){
                j++;
                continue;
            }
            else{
                count=1;
            }
            j++;
        }
        return ans;
    }
};
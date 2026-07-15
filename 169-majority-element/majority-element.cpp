class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int , int>mp;
        int res = 0 , max_count = 0;
        for(int u : nums){
            mp[u]++;
            if(mp[u] > max_count)
            {
                res = u;
                max_count = mp[u];
            }
        }
        return res;
    }
};
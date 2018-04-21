class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>::iterator it1, it2;
        vector<int>ret;
        for(it1=nums.begin();it1!=nums.end();it1++)
            for(it2=nums.begin()+1;it2!=nums.end();it2++)
                if(*it1+*it2==target){
                    ret.push_back(it1-nums.begin());
                    ret.push_back(it2-nums.begin());
                    return ret;
                }            
    }
};
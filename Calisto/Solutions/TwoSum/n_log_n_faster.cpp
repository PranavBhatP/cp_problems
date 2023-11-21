class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copy(nums);
        sort(copy.begin(),copy.end());
        vector<int> result{-1,-1};
        int lower=0,high=copy.size()-1;
        while(lower<high){
            if(copy[lower]+copy[high]>target){
                high--;
            }
            else if(copy[lower]+copy[high]<target){
                lower++;
            }
            else{
                result[0]=find(nums.begin(),nums.end(),copy[lower])-nums.begin();
                for(int i = 0;i<nums.size();i++){
                    if(nums[i]==copy[high]&&i!=result[0]){
                        result[1]=i;
                        goto label;
                    }
                }
            }
        }
        label:
            return result;
    }
};
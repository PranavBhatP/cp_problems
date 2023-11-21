class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> copy(nums);
        sort(copy.begin(),copy.end());
        vector<int> result {-1,-1};
        for(int i = 0;i<nums.size();i++){
            int a = nums[i];
            int b = target-a;
            cout<<a<<" "<<b<<endl;
            result[0]=i;
            int low = 0,high = nums.size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(copy[mid]==b){
                    int index = -1;
                    for(int j = 0;j<nums.size();j++){
                        if(b==nums[j]){
                            index=j;
                            break;
                        }
                    }
                    if(index!=i){
                        result[1]=index;
                        goto label;
                    }
                    break;
                }
                else if(copy[mid]>b){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
        }
        label:
            return result;
    }
};
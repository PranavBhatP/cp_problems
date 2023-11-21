import java.util.*;

public class TwoSum{
    public int[] twoSum(int[] nums, int target) {
        int[] copy = Arrays.copyOf(nums,nums.length);
        int[] res = new int[2];
        Arrays.sort(copy);
        int lower = 0, upper = nums.length - 1;
        while(lower<upper){
            if((copy[lower]+copy[upper])>target){
                upper--;
            }
            else if((copy[lower]+copy[upper])<target){
                lower++;
            }
            else{
                for(int i=0;i<nums.length;i++){
                    if(nums[i]==copy[lower]){
                        res[0]=i;
                        break;
                    }
                }
                for(int j=0;j<nums.length;j++){
                    if((j!=res[0]) && (nums[j]==copy[upper])){
                        res[1]=j;
                        break;
                    }
                }
                return res; 
            } 
        }
        return new int[]{-1, -1};
    }
}
public class Leetcode287_sol1 {
    public int findDuplicate(int[] nums) {
        int i,j, count = 0;

        for( i = 1; i <= nums.length - 1; i++ ){
            count = 0;
            for( j = 0; j <= nums.length - 1; j++ ){
                if( i == nums[j]){
                    count +=1 ;
                }
            }
            if( count > 1){
                return i;
            }
        }
        return -1;
    }
}
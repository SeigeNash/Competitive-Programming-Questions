public class Array101RemovingElements {
    public int removeElement(int[] nums, int val) {
        int i, j, count = 0, swap;
        int len = nums.length - 1;

        for( i = 0; i <= len; ){
            if( nums[i] == val ){
                for( j = i; j < len; j++ ){
                    swap = nums[ j + 1];
                    nums[j + 1] = nums[j];
                    nums[j] = swap;
                }
                len--;
            }
            else{
                count += 1;
                i++;
            }
        }
        return count;

    }
}

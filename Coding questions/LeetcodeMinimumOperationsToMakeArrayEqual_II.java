public class LeetcodeMinimumOperationsToMakeArrayEqual_II {

    public static long minOperations(int[] nums1, int[] nums2, int k) {

        long difference = 0, positive_sum = 0, sum = 0, total_number_of_operations;
        int i, j;
        for( i = 0; i < nums1.length; i++ ){
            if( k == 0 ){
                int count = 0;
                // compare two arrays
                // if they are the same return o as o steps needed
                // if not return - 1
                for( j = 0; j < nums1.length; j++){
                    if( nums1[j] == nums2[j]){
                        count += 1;
                    }
                }
                if( count == nums1.length ){
                    return 0;
                }
                else{
                    return -1;
                }

            }
            difference = nums1[i] - nums2[i];
            if( difference % k != 0){
                //System.out.println( "difference is : " + difference );
                return -1;
            }
            if( difference > 0 ) {
                positive_sum = positive_sum + difference;
                //System.out.println(positive_sum);
            }
            sum = sum + difference;
        }

        if( sum != 0){
            //System.out.println( "final difference is : " + difference );
            return -1;
        }

        total_number_of_operations = positive_sum / k;

        return total_number_of_operations;
    }

    public static void main(String[] args) {
        int[] nums1 = {1,2,3,4};
        int[] nums2 = {1,2,3,4};
        int k = 0;
        long result = minOperations( nums1, nums2, k);

        System.out.println( "final result is: " + result );
    }
}

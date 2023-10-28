public class Array101MergeArray {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i, j = 0, smaller, larger;

        if( nums1.length > nums2.length ){
            for( i = m ; i < nums1.length ; i++ ){
                nums1[i] = nums2[j];
                j++;
            }
            sort(nums1);
        }
        else{
            for( i = n ; i < nums2.length ; i++ ){
                nums2[i] = nums1[j];
                j++;
            }
            sort(nums2);
        }

    }

    // creating sortiing method
    // sorting working perfectly

    public void sort( int[] arr){
        int i, j, swap;
        for (i = 0; i < arr.length - 1 ; i++) {
            for (j = i; j < arr.length - 1 ; j++) {
                if (arr[j] > arr[j + 1]){
                    swap = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = swap;
                }
            }
        }
    }
}

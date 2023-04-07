import java.util.Arrays;

public class Array101ReplacingWithGreatest {
    public static int[] replaceElements(int[] arr) {
        int i, j, max = 0;
        if( arr.length == 1 ){
            arr[0] = -1;
            return arr;
        }
        i = 0;
        if( arr.length > 2){
            for( i = 0 ; i < arr.length - 2; i++ ){
                max = arr[i + 1];
                // this loop finds the maximum number in the remaining array
                j = i+ 1;
                for( ; j < arr.length; j++ ){
                    if( arr[j] > max) {
                        max = arr[j];
                    }
                }
                // assigning the elements equal to the lagrest found element
                arr[i] = max;
            }
        }
        arr[i] = arr[i+1];
        arr[i + 1] = -1;
        return arr;
    }

    public static void main(String[] args) {
        int[] arr = { 17,18,5,4,6,1 };
        int[] returned_array = replaceElements( arr );
        System.out.println(Arrays.toString(returned_array));
    }
}

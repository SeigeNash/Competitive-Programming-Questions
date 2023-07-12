import java.util.Arrays;

public class Leetcode414 {

    public static void main(String[] args) {

        int[] arr = {1, 1, 1, 1, 1, 2};

        int valid = 1;
        int top, j;

        Arrays.sort(arr);
        top = arr[ arr.length - 1];

        for( j = arr.length - 1; j >= 0 && (valid < 3); j--) {
            if (arr[j] != top) {
                top = arr[j];
                valid += 1;

            }
        }

        if(valid == 2){
            System.out.println(arr[ arr.length - 1]);
        }

        System.gc();
        System.out.println(top);

    }
}

import java.util.Arrays;

public class Leetcode2160_sol2 {

    public static void main(String[] args) {


        int num = 2932;
        int i, a, sum;
        int[] store = new int[4];

        // extracting all the digits in an array -

        for( i = 0 ; i < 4; i++ ){
            a = num % 10;
            num = num / 10;
            store[i] = a;
        }

        if( store[0] == 0){
            if( store[1] == 0){
                sum = store[2] + store[3];
                System.out.println(sum);
            }

            sum = 10* store[1] + store[2] + store[3];
            System.out.println(sum);
        }

        sum = (10 * store[0] + store[2]) + (10 * store[1] + store[3]);
        System.out.println(sum);;
    }
}

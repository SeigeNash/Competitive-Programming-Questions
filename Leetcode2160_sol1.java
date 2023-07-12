import java.util.Arrays;
public class Leetcode2160_sol1 {

    public static void main(String[] args) {

        int num = 2932;
        int i, j, k, sum, min = 9999;
        int a;
        int num1, num2;
        int[] store = new int[4];
        int[] all2digitCombos = new int[12];

        // extracting all the digits in an array -

        for( i = 0 ; i < 4; i++ ){
            a = num % 10;
            num = num / 10;
            store[i] = a;
        }
        // loop for making permutaions of all possible 2 number combinations
        k = 0;
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){

                if( j == i ){
                    continue;
                }
                num1 = 10*store[i] + store[j];
                // num2 = 10*store[i] + (store[j]+1);
                System.out.println("num1 = " + num1 );
                // sum = num1 + num2;
                all2digitCombos[k] = num1;
                k++;

//                if( min > sum ){
//                    min = sum;
//                }
            }
        }
        Arrays.sort(all2digitCombos);
        System.out.println( all2digitCombos[0] + all2digitCombos[1] );
    }
}

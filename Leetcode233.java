public class Leetcode233 {
    public static long counter( long n){
        int i;
        long count = 0;
        long num, digit;

        for( i = 0 ; i <= n; i++){
            num = i;
            while( num != 0){
                digit = num % 10;
                if( digit == 1){
                    count ++;
                }
                num = num/10;

            }
        }
        return count;
    }

    public static void main(String[] args) {
        int i;
        long n = 111;
        long count = counter(n);

        System.out.println("Number of times 1 occures: " + count);
    }
}

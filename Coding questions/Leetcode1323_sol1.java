public class Leetcode1323_sol1 {

    public static void main(String[] args) {

        int temp;
        double i;
        int num = 9996;
        int count = 0;

        int len = ( int ) ( Math.log10(num) + 1 );
        System.out.println(len);

        for( i = len - 1; i > 0; i--){
            temp = (int) (num / Math.pow(10, i));
            if( temp % 9 != 0){
                num = (int) (num + 3 * Math.pow(10, i));
                break;
            }
        }
        if( num % 9 != 0){
            num = num + 3;
        }
        System.out.println(num);

    }
}

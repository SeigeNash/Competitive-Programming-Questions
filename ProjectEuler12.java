public class ProjectEuler12 {

    public static void main(String[] args) {

        long i, j, count = 0, sum = 0;
        long num = 15000;

        for( i= 8000; i <= 12375; i++){

            count = 0;
            sum = 0;

            for( j = 1; j <= i; j++){
                sum = sum + j;
            }

            for( j = 1; j <= sum; j++){
                if(sum % j == 0){
                    count +=1;
                }
            }
            if( count >= 500){
                System.out.println("number of divisors of " + sum + " (sum of first " + i + " numbers) is " + count);
            }

        }

    }
}

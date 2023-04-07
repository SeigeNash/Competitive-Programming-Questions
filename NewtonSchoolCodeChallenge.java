public class NewtonSchoolCodeChallenge {

    static int conditionVerifier( int arr[], int size){

        int base = arr[0];
        int count = 0, fx, i, j;
        //System.out.println( base );
        for( i = 0 ; i < size ; i++ ){
            fx = arr[0];
            for( j = 0 ; j <= i ; j++ ){
                fx = fx | arr[j];
                //System.out.println("value of fx for j = " + j + " is " + fx );
            }
            if( fx == base ){
                count = count + 1;
            }
        }
        if( count == size ){
            return 1;
        }
        else{
            return 0;
        }
    }

    public static void main(String[] args) {
        int size = 2;
        int arr[] = { 2, 2 };
        int result = conditionVerifier( arr, size);
        System.out.println("result = " + result);
    }
}

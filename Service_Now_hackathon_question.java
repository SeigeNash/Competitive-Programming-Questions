public class Service_Now_hackathon_question {

    public static void main(String[] args) {


        int i, j, swap, difference;
        int max = 1;
        int max_power = 1;
        int[] arr = {1,2,3,4,5,6};

        // the loop returns fort with the maximum power
        for( i = 0; i < arr.length; i++){
            if( arr[i] > max_power){
                max_power = arr[i];
            }
        }
        // perform sorting on array
        for( i = 0; i < arr.length; i++){
            for( j = 0; j < arr.length - i; j++){
                if( arr[j] > arr[j+1]){
                    swap = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = swap;
                }
            }
        }
        for( i = 0; i < arr.length; i++){
            if( arr[i] <=0 ){
                continue;
            }
            if( arr[i+1] - arr[i] > 1 ){
                difference = max_power - ( arr[i] + 1);
                break;
            }
            else{
                difference = 1;
            }
        }
    }
}

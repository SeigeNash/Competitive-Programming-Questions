public class Leetcode27_sol1 {

    public static void main(String[] args) {

        int[] arr = {0, 7, 4, 2, 6, 7, 1, 8, 6, 3, 5};
        int len = arr.length - 1;
        int i, swap, count = 0;
        int val = 7;

        for( i = 0; i <= len; ){

            if( arr[i] == val){
                swap = arr[len];
                arr[len] = arr[i];
                arr[i] = swap;
                len --;
            }
            else{
                count++;
                i++;
            }
        }
        for( i = 0; i <= arr.length - 1; i++){
            System.out.print(arr[i]);
        }
        System.out.println("\n");
        System.out.println(count);
    }

}

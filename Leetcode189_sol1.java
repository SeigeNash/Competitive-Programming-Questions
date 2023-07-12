public class Leetcode189_sol1 {

    public static void main(String[] args) {

        int[] source = { 1, 2, 3, 4, 5, 6, 7 };
        int[] target = new int[7];

        int i, j;
        int k = 3;

        for( i = k + 1, j = 0; j < source.length; j++){

            if( i == source.length){
                i = 0;
            }
            target[j] = source[i];
            i++;
        }

        for( i = 0; i < target.length; i++){
            System.out.println(target[i]);
        }
    }
}

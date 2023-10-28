import java.lang.String;

public class HackerRank_balanacedBrackets {

    public static void main(String[] args) {

        String s = "[2332]";
        int i, j, count = 0;

        int len = s.length();
        int mid = len/2;

        for( i = 0, j = (len - 1); i <= (mid - 1) && j >= mid; i++, j--){

            int compareOneTwo = Character.compare(s.charAt(i), s.charAt(j));
            if( compareOneTwo == 0){
                System.out.println(s.charAt(i));
                System.out.println(s.charAt(j));

                count += 1;
            }

        }
        System.out.println(count);


        if( count == mid ){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }
    }
}

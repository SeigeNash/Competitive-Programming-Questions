public class Leetcode233_sol2 {
    public static String counter( long n){
        int i;
        long count = 0;
        long num, digit;
        StringBuilder s = new StringBuilder(new String());
        s = new StringBuilder();
        for( i = 0 ; i <= n; i++){
            // concatenation performed
            s.append(i);
        }
        // extract digits from the string and verify if it is equal to 1
        // keep slicing the string
        // extrcat a single digit from the string
        String s_string = s.toString();
        char[] ch = s_string.toCharArray();

        for( i = 0; i < s.length(); i++){
            /*if( ch[i] == "1" ){

            }*/
        }
        return s.toString();
    }

    public static void main(String[] args) {
        int i;
        long n = 11;
        String count = counter(n);

        System.out.println(count);
    }
}

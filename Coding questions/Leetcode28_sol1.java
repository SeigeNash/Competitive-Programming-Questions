public class Leetcode28_sol1 {

    public static void main(String[] args) {

        String n = "issip";
        String h = "mississippi";
        int i = 0, j = 0;
        int first_occ = -1;
        int previous_possibility = -1;

        for( j = 0; (j < h.length()) && (i < n.length()); ){
            System.out.println("i = " + i + " j = " + j);
            if((i == 0) && ( n.charAt(i) == h.charAt(j))){
                first_occ = j;
                i++;
                j++;
                System.out.println("condition 1");
            }
            else if((i != 0) && ( n.charAt(i) == h.charAt(j))){
                i++;
                j++;
                System.out.println("condition 2");
            }
            else if(( n.charAt(i) != h.charAt(j)) && ( n.charAt(0) == h.charAt(j))){
                first_occ = j;
                i = 1;
                j++;
                System.out.println("condition 3");
            }
            else if(n.charAt(i) != h.charAt(j)){
                first_occ = -1;
                i = 0;
                j++;
                System.out.println("condition 4");
            }

            if( (i != 0) && (h.charAt(j) == n.charAt(0) ) ){
                previous_possibility = j;
            }
        }

        if( (i == n.length()) && (first_occ != -1 ) ){
            System.out.println(first_occ);
        }
        else{
            System.out.println("-1");
        }
    }

}

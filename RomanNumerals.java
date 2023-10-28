import java.util.Scanner;
import java.util.HashMap;

public class RomanNumerals {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String inputString = sc.nextLine();

        // System.out.println("You entered: " + inputString);
        sc.close();

        // implementation of hashmap

        HashMap<String, Integer> hashMap = new HashMap<>();

        // Add key-value pairs to the HashMap
        hashMap.put("I", 1);
        hashMap.put("V", 5);
        hashMap.put("X", 10);
        hashMap.put("L", 50);
        hashMap.put("C", 100);
        hashMap.put("D", 500);
        hashMap.put("M", 1000);

        // Access values using keys

        int length = inputString.length();
        int sum = 0;

        for (int i = 0 ; i < length ; i++ ){

            char first = inputString.charAt(i);
            char next = inputString.charAt(i+1);

            int valueOne = hashMap.get(first);
            int valueTwo = hashMap.get(next);

            // compare the values
            if( valueOne < valueTwo){
                sum += valueOne;
            }
            else{
                sum -= valueOne;
            }


            // finally calculate the sum
        }

        System.out.println(sum);

    }
}

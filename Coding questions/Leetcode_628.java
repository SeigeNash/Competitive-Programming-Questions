import java.util.Arrays;

public class Leetcode_628 {

    public static void main(String[] args) {

        int[] nums = {1, 2, 3, 4, 5, 56, 3};
        int len = nums.length - 1;
        int p1, p2;

        Arrays.sort(nums);

        p1 = nums[0] * nums[1] * nums[len];
        p2 = nums[len - 2] * nums[len - 1] * nums[len];

        // there are only two possible products
        // product of three right most numbers
        // product of two left most numbers and the right most number
        /*
        if( p1 > p2){
            return p1;
        }
        else{
            return p2;
        }
        */
    }

}






// sort the array.
// the sorted array, has two ends
// on the leftmost end, we have the numbers who might be negative
// the leftmost negative numbers have the largest magnitude
// the right most numbers might be positive
// the rightmost positive numbers have the largest magnitude
// the product with the largest magnitude is the product of any three out of these 6.
// compare them and that's the answer

// if all the three left most digits are negative, we cannot multiply all of them,
// as the product of three negative numbers is obviously smaller than the product of two
// big negative number and one postive number
// if that's the case, then considerably the two left most elements

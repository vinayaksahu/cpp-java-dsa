public class Reverse {
    
    public static void main(String[] args) {
        
        int n = 153, rev, rem;
        rev = 0;

        while (n != 0) {
            rem = n % 10; //last digit
            rev = rev * 10 + rem;
            n /= 10; //remove last digit
        }
        System.out.println(rev);
    }
}

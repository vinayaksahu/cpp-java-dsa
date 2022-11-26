public class SumNaturalNum {
    
    public static void main(String[] args) {
        
        int num = 10, sum = 0;

        //using for loop
        for (int i = 1; i <= num; i++) {
            sum += i;
        }
        System.out.println("Sum of " + num + " natural numbers are: " + sum);
    }
}

import java.util.Scanner;

/**
 * FactorialNumber
 */
public class FactorialNumber {

    static int factorial(int n) {

        int fact = 1;

        for (int i = 1; i <= n; i++) {
            fact = fact  * i;
        }
        return fact;
        
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int value = input.nextInt();
        
        int fact = factorial(value);

        System.out.println(fact);

        input.close();
    }
}
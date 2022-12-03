import java.util.Scanner;

/**
 * FactorialNumber
 */
public class Factorial {

    static int factorial(int n) {

        //int fact = 1;

        /*if (n < 0) {
            return -1;
        }
        else if (n == 0) {
            return 1;
        }
        else {*/
/*
*           for (int i = 1; i <= n; i++) {
*              fact = fact  * i;
*         }
*/         return (n < 0) ? -1 : (n == 0) ? 1 : n * factorial (n - 1);  
        //}
        // return fact;
        
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int value = input.nextInt();
        
        int fact = factorial(value); 

        System.out.println(fact);

        input.close();
    }
}
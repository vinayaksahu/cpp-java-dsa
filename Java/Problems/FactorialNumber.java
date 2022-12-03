import java.util.Scanner;

/**
 * FactorialNumber
 */
public class FactorialNumber {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int value = input.nextInt();
        
        int fact = 1;

        for (int i = 1; i <= value; i++) {
            fact = fact  * i;
        }
        System.out.println(fact);

        input.close();
    }
}
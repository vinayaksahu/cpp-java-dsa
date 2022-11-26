import java.util.Scanner;

public class FactorialNumber {
    
    public static void main(String[] args) {
        
        int fact = 1;

        //create an object of Scanner
        Scanner input = new Scanner(System.in);
        //take input from user
        int num = input.nextInt();

        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        System.out.println(fact);

        //close Scanner object
        input.close();
    }
}

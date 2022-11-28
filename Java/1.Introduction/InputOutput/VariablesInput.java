import java.util.Scanner;

public class VariablesInput {
    public static void main(String[] args) {

        int num1 = 5;
        double num2 = 5.545;

        System.out.println(num1);
        System.out.println(num2);
        
        System.out.println("Input any float: ");

        //Create an object of Scanner
        Scanner input = new Scanner(System.in);

        //take input from user
        float num3 = input.nextFloat();

        System.out.println("You entered: " +num3);

        //close Scanner object
        input.close();

    }
}

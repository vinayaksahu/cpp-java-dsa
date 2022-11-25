//import Scanner pkg
import java.util.Scanner;

class Input {

    public static void main (String[] args) {

        System.out.print("Enter any number: ");

        //create an object of Scanner
        Scanner input = new Scanner(System.in);

        //take input from user
        int num = input.nextInt();
        System.out.println("You entered: "+num);

        //close Scanner object
        input.close();

    }
}
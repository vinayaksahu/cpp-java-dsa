import java.util.Scanner;

class SumOfPositive {

    public static void main(String[] args) {
        
        int sum = 0;
        //create an object of Scanner
        Scanner input = new Scanner(System.in);    
        //take input from user
        System.out.println("Enter first number: ");
        int num = input.nextInt();
  
        while (num >= 0) {
            sum += num;

            System.out.println("Enter a number: ");
            num = input.nextInt();
            
        }
        //print the sum
        System.out.println("Sum = " + sum);

        input.close();
    }
}       
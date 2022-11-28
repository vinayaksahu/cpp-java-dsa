import java.util.Scanner;

class IfElse {
    public static void main(String[] args) {
        
        //String myName = "Vnayak";
        
        //create an object of Scanner
        Scanner input = new Scanner(System.in);

        //take input from user
        String myName = input.next();  //input- Vinayak

        //if block
        if (myName == "Vinayak") {
            System.out.println(myName);
        } else { //else block
            System.out.println("Try again");  //output- Try again
            
        }

        //close scanner object
        input.close();
    }

}



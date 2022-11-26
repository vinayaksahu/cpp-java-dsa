public class Switch {
    
    public static void main(String[] args) {
        
        char op;
        float num1, num2;
      
        op = '+';
      
        System.out.println("Enter two numbers: ");
        num1 = 4;
        num2 = 5;
      
        switch(op) {
      
          case '+':
            System.out.println(" + " + num2 + " = " + (num1 + num2));
            break;
      
          case '-':
            System.out.println(" - " + num2 + " = " + (num1 - num2));
            break;
      
          case '*':
            System.out.println(" * " + num2 + " = " + (num1 * num2));
            break;
      
          case '/':
            System.out.println(" / " + num2 + " = " + (num1 / num2));
            break;
      
          default:
            System.out.println("Error! operator is not correct");
            break;
        }
    }
}

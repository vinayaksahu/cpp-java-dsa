import java.util.Scanner;

class AvgNumArray {

    public static void main(String[] args) {
        
        int n,  i;
        float[] num;
        float sum = 0.0f ,avg;
        
        Scanner input = new Scanner(System.in);
        
        System.out.println("Enter the numbers of data: ");
        n = input.nextInt();
    
        while (n > 100 || n <= 0)
        {
            System.out.println("Error! number should in range of (1 to 100).");
            System.out.println("Enter the number again: ");
            n = input.nextInt();
        }
    
        for(i = 0; i < n; ++i)
        {
            System.out.println( (i + 1) + ". Enter number: ");
            n = input.nextInt();
            sum += num[i];
        }
    
        avg = sum / n;
        System.out.println("Average = " + avg);

        input.close();
    }
}
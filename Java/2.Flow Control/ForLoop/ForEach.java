public class ForEach {

    public static void main(String[] args) {
        
        //Declaration array
        int[] numbers = {1, 5, 8, -5, 9};

        //Declaration foreach loop
        for (int i : numbers) {
            System.out.println(i);
        }

        //sum of the array
        int sum = 0;
        for (int i : numbers) {
            sum += i;
        }

        System.out.println("Sum of the array: " + sum);
    }
}

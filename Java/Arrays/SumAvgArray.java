public class SumAvgArray {

    public static void main(String[] args) {
        
        int[] numbers = {1, 5, -6, 5};

        int sum = 0;
        for (int number : numbers) {
            sum += number;
        }
        System.out.println("Sum: " + sum);

        int lengthArr = numbers.length;
        double avg = (double)sum/(double)lengthArr;

        System.out.println("Average: " + avg);
    }
}

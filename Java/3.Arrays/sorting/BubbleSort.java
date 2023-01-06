public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {5, 8, 4, 1, 2, 3, 6, 9, 7};
        int n = arr.length;

        System.out.println("Bubble Sort: ");

        for (int i = 0; i < n-1; i++) { // total round
            for (int j = 0; j < n-i-1; j++) { 
                if (arr[j] > arr[j+1]) {
                    //swap arr[j] & arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        //print the sorted array
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

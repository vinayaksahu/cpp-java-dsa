public class SelectionSort {

    public static void main(String[] args) {

        int[] arr = {1, 5, -8, 6, 4};

        int n = arr.length;

        System.out.println("Selection Sort: ");
        for (int i = 0; i < n-1; i++) { // total round
            //find minimum elemenet 
            int min = i; 
            for (int j = i+1; j < n; j++) { 
                if (arr[min] > arr[j]) {
                    min = j;
                }
            }
            // swap found minimum element with first element
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        //Print the sorted array
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
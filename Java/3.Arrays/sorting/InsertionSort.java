public class InsertionSort {
    public static void main(String[] args) {

        System.out.println("Insertion Sort: ");
        
        int[] arr = {7, 4, 1, 2, 5, 8, 9, 6, 3};
        int n = arr.length;
        for (int i = 1; i < n; i++) { // total round -> start from the second element assume the first elment is sorted
            int key = arr[i]; //store second element to the key
            int j = i-1;
            for (; j >= 0; j--) { // this loop is for compare key element to its previous adjecent element
                if (arr[j] > key)
                    arr[j+1] = arr[j]; // shift to the right
                else
                    break;
            }
            arr[j+1] = key;
        }

        // print the sorted element
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

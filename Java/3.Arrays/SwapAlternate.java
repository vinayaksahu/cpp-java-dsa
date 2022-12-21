public class SwapAlternate {
    
    public static void main(String[] args) {
        
        int[] arr = {1, 2, 3, 4, 5, 6};
        int n = arr.length;
        int temp = 0;

        for (int i = 0; i < n; i+=2) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }

        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        
    }
}

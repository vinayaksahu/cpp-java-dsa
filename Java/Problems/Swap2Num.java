public class Swap2Num {
    public static void main(String[] args) {
        
        int n1, n2, temp;

        n1 = 4;
        n2 = 5;

        //swap using temp
        temp = n1;
        n1 = n2;
        n2 = temp;

        System.out.println("n1 is " + n1);
        System.out.println("n2 is " + n2);
    }
}

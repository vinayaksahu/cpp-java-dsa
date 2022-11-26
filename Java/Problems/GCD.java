public class GCD {
    
    public static void main(String[] args) {
        
        int n1 = 8, n2 = 12, max, GCD = 1;

        max = (n1 > n2) ? n1 : n2;
    
        for (int i = 1; i <= max; ++i){
            if(n1 % i == 0 && n2 % i == 0){
                GCD = i;
            }
        }
        System.out.println(GCD);
    }
}

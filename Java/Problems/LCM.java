public class LCM {
    public static void main(String[] args) {
        
        int n1 = 4, n2 = 6, max;
    
        max = (n1 > n2) ? n1 : n2;
    
        do{
    
          if (max % n1 == 0 && max % n2 == 0)      {
            System.out.println(max);
            break;
          }else{
            ++max;
          }  
    
        } while (true);
    }
}

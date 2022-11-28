public class Switch {
    public static void main(String[] args) {
        
        //Declare variables
        int num = 40;
        String size;

        //switch statement to check size
        switch (num) {
            case 38: 
                size = "S";                
                break;

            case 40:
                size = "L";
                break;

            case 42:
                size = "XL";
                break;

            default:
                size = "Unknown";
                break;
        }

        System.out.println("Size: " + size);

    }    
}

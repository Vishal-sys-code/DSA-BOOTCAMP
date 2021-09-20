import java.util.Scanner;
public class discount {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        double discount, amount, markedprice, s;
        //markedprice = 1000;
        //discount = 25;
        System.out.println("Enter the M.R.P");
        markedprice = sc.nextDouble();
        System.out.println("M.R.P: " + markedprice);
        System.out.println("Enter the Discount");
        discount = sc.nextDouble();
        System.out.println("Discount Rate: " + discount);
        s = 100-discount;
        amount = (s*markedprice)/100;
        System.out.println("Discounted Price: " + amount);
        sc.close();
    }    
}

import java.util.Scanner;
public class electricitybill {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the unit: ");
        int unit = sc.nextInt();
        if (unit > 0 && unit <= 100) {
            System.out.println("Bill Amount is: " + ((unit * 5)));
        }
        else if (unit > 100 && unit <= 200) {
            System.out.println("Bill Amount is: " + ((100 * 5) + (unit - 100) * 7));
        }
        else if (unit > 200 && unit <= 300) {
            System.out.println("Bill Amount is: " + ((100 * 5) + (100 * 7) + (unit - 200) * 10));
        }
        else if (unit > 300) {
            System.out.println("Bill Amount is: " + ((100 * 5) + (100 * 7) + (100 * 10) + (unit - 300) * 15));
        }
        else {
            System.out.println(" NO NEED TO PAY THE BILLS ");
        }
        sc.close();
    }
}

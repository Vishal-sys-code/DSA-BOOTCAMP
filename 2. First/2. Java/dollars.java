import java.util.Scanner;
public class dollars{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the rupiya: ");
        int rupiya = sc.nextInt();
        double dollars; 
        if(rupiya<0) System.out.println("Amount is: " + "0");
        else{
            dollars = (rupiya / 73.50);
            System.out.println("Amount is: " + dollars);
        }
        sc.close();
    }
}
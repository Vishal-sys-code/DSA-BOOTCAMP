import java.util.Scanner;
public class commision {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        double amount, commision, commision_percentage;
        System.out.print("Enter the amount: ");
        amount = sc.nextDouble();
        System.out.print("Enter the commision_percentage: ");
        commision_percentage = sc.nextDouble();
        commision = (commision_percentage/100)*amount;
        System.out.println("Commision is: " + commision);
        sc.close();
    }
}

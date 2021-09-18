import java.util.Scanner;
import java.math.*;
public class areaofparallelogram {
    private static final double pi = 3.1416;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("============ FOR BASE AND HEIGHT: ===================");
        System.out.println("Enter the base: ");
        float base = sc.nextFloat();
        System.out.println("Enter the height: ");
        float height = sc.nextFloat();
        double area1 = (base*height);
        if(base<=0 || height<=0){
            System.out.println("Area cannot be negative");
        }
        else{
            System.out.print("Area is: " + area1);
        }

        System.out.println("============ FOR DIAGONALS: ===================");
        System.out.println("Enter the Diagonal 1: ");
        float diagonal1 = sc.nextFloat();
        System.out.println("Enter the Diagonal 2: ");
        float diagonal2 = sc.nextFloat();
        double area2 = (diagonal1*diagonal2)/2;
        if(diagonal1<=0 || diagonal2<=0){
            System.out.println("Area cannot be negative");
        }
        else{
            System.out.print("Area is: " + area2);
        }

        sc.close();
    }
}

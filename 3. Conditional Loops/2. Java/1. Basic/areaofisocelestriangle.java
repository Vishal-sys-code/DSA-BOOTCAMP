import java.util.Scanner;
import java.math.*;
public class areaofisocelestriangle {
    private static final double pi = 3.1416;

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the a: ");
        float a = sc.nextFloat();
        System.out.print("Enter the b: ");
        float b = sc.nextFloat();
        double  area=(b/4)*Math.sqrt((4*a*a)-(b*b));
        if(a<0 || b<0){
            System.out.println("Area cannot be negative");
        }
        else{
            System.out.println("Area is: " + area);
        }
        sc.close();
    }
}

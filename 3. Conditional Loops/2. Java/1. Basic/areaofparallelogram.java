import java.util.Scanner;
import java.math.*;
public class areaofparallelogram {
    private static final double pi = 3.1416;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the base: ");
        float base = sc.nextFloat();
        System.out.print("Enter the height: ");
        float height = sc.nextFloat();
        double area = (base*height);
        if(base<=0 || height<=0){
            System.out.println("Area cannot be negative");
        }
        else{
            System.out.print("Area is: " + area);
        }
        sc.close();
    }
}

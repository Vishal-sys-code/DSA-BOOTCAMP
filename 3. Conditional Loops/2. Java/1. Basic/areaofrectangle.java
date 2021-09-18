import java.util.Scanner;
import java.math.*;
public class areaofparallelogram {
    private static final double pi = 3.1416;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length: ");
        float length = sc.nextFloat();
        System.out.print("Enter the width: ");
        float width = sc.nextFloat();
        double area = (length*width);
        if(length<=0 || width<=0){
            System.out.println("Area cannot be negative");
        }
        else{
            System.out.print("Area is: " + area);
        }
        sc.close();
    }
}

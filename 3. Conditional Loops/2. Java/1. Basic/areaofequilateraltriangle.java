import java.util.Scanner;
import java.math.*;
public class areaofequilateraltriangle {
    private static final double pi = 3.1416;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the side: ");
        double side = sc.nextDouble();
        double part1 = (Math.sqrt(3))/4;
        double part2 = (side*side);
        double area = part1*part2;
        if(side<0){
            System.out.println("Area is negative");
        }
        else{
            System.out.println("Area is: " + area);
        }
        sc.close();
    }
}

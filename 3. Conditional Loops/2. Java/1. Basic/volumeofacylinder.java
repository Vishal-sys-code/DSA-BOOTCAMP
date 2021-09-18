import java.util.Scanner;
public class volumeofacylinder {
    private static final double pi = 3.1416;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius: ");
        double radius = sc.nextDouble();
        System.out.print("Enter the height: ");
        double height = sc.nextDouble();
        double circle = pi * (radius * radius);
        double volume = (circle * height);
        if (radius < 0 || height < 0){
            System.out.print("VOLUME CANNOT BE NEGATIVE ");
        }
        else{
            System.out.print("VOULME IS:  " + volume);
        }
        sc.close();
    }
}

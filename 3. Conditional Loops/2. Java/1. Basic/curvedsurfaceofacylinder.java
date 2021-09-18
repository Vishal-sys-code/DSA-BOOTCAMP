import java.util.Scanner;
public class curvedsurfaceofacylinder {
    private static final double pi = 3.1416;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius: ");
        double radius = sc.nextDouble();
        System.out.print("Enter the height: ");
        double height = sc.nextDouble();
        double area = 2 * pi * radius * height;
        if(radius <= 0 || height <= 0){
            System.out.print("Area connot be negative");
        }
        else{
            System.out.print("Curved Surface Area is: " + area);
        }
        sc.close();
    }
}

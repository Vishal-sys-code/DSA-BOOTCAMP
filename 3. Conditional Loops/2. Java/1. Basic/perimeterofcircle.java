import java.util.Scanner;
public class perimeterofcircle {
    private static final double pi = 3.1416;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius: ");
        float radius = sc.nextFloat();
        double area = 2 * pi * radius;
        if(radius<=0){
            System.out.println("Area is 0");
        }
        else{
            System.out.println("Area is: " + area);
        }
        sc.close();
    }
}

import java.util.Scanner;
public class areaofcircle{
    private static final double pi = 3.1416;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius: ");
        int radius = sc.nextInt();
        double area;
        if(radius<=0){
            System.out.println("Area is 0");
        }
        else{
            area = pi*radius*radius;
            System.out.println("Area is: " + area);
        }
        sc.close();
    }
}
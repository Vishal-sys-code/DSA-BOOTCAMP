import java.util.Scanner;
public class volumeofasphere {
    private static final double pi = 3.1416;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius: ");
        double radius = sc.nextDouble();
        double circle = pi * (radius * radius * radius);
        double volume = (4 * circle) / 3;
        if (radius < 0){
            System.out.print("VOLUME CANNOT BE NEGATIVE ");
        }
        else{
            System.out.print("VOULME IS:  " + volume);
        }
        sc.close();
    }
}

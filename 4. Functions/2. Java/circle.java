import java.util.Scanner;
public class circle {

    static void mensuration(double r){
        if(r < 0){
            System.out.print("Check your radius again!!!: ");
        }
        else{
            double circumference =  (2 * Math.PI * r);
            double area = (Math.PI * r * r);
            System.out.println("Circumference: " + circumference);
            System.out.println("Area: " + area);
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number RADIUS : ");
        double r = sc.nextDouble();
        System.out.println(" :  === RESULT === : ");
        mensuration(r);
        sc.close();
    }
}

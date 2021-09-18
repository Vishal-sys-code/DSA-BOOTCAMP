import java.util.Scanner;
public class totalsurfacearea {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the side: ");
        double side = sc.nextInt();
        double area = 6 * side * side;
        if(side <= 0){
            System.out.println("Area cannot be negative");
        }
        else{
            System.out.println("Total Surface Area is: " + area);
        }
        sc.close();
    }
}

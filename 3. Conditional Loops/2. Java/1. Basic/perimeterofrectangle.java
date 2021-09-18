import java.util.Scanner;
public class perimeterofrectangle {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the side1: ");
        int lenght = sc.nextInt();
        System.out.print("Enter the side2: ");
        int width = sc.nextInt();
        int perimeter = 2 * (lenght+width);
        if(lenght<=0 || width <=0){
            System.out.println("Perimeter is negative");
        }
        else{
            System.out.println("Perimeter is: " + perimeter);
        }
        sc.close();
    }
}

import java.util.Scanner;
public class rightrectangularpyramid{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        double length, width, height;
        System.out.print("Enter the length: ");
        length = sc.nextDouble();
        System.out.print("Enter the width: ");
        width = sc.nextDouble();
        System.out.print("Enter the height: ");
        height = sc.nextDouble();
        double calculation = (length * width * height);
	    double volume = calculation / 3;
        if(length <= 0 || width <= 0 || height <= 0){
            System.out.print("Volume cannot be negative");
        }
        else{
            System.out.print("Volume is: " + volume);
        }
        sc.close();
    }
}
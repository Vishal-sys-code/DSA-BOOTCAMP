import java.util.Scanner;
public class volumeofaprism {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the X-AXIS MEASURMENT: ");
        double x_axis_measurment = sc.nextDouble();
        System.out.print("Enter the Y-AXIS MEASURMENT: ");
        double y_axis_measurment = sc.nextDouble();
        System.out.print("Enter the Z-AXIS MEASURMENT: ");
        double z_axis_measurment = sc.nextDouble();

        double volume = (x_axis_measurment * y_axis_measurment * z_axis_measurment);
        if (x_axis_measurment < 0 || y_axis_measurment < 0 || z_axis_measurment < 0){
            System.out.print("Volume cannot be negative");
        }
        else{
            System.out.print("Volume is: " + volume);
        }
        sc.close();
    }
}

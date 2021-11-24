import java.util.Scanner;
public class temperature {

    public void celcToFar(double celcius){
        double part_celcius = (celcius*1.8);
        double farhenheit = (part_celcius)+32;
        System.out.println("Fahrenheit is: " + farhenheit);
    }

    public void farToCelc(double farhenheit){
        double part_fahrenheit = (farhenheit-32.0);
        double celcius = (part_fahrenheit)/(1.8);
        System.out.println("Celcius is: " + celcius);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Converted Celcius From Fahrenheit is: ");
        double celcius = sc.nextDouble();
        System.out.println("Converted Fahrenheit From Celcius is: ");
        double farhenheit = sc.nextDouble();
        temperature object1 = new temperature();
        temperature object2 = new temperature();
        object1.celcToFar(celcius);
        object2.farToCelc(farhenheit);
        sc.close();
    }
}

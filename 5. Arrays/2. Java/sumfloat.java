import java.util.Scanner;
public class sumfloat{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        float [] array = new float [5];
        float sum = 0;
        System.out.println("Enter the elements of the array: ");
        for(int i=0; i<array.length;i++){
            array[i] = sc.nextFloat();
        }
        for(int i=0; i<array.length;i++){
            sum += array[i];
        }
        System.out.println("Sum is: " + sum);
        sc.close();
    }
}
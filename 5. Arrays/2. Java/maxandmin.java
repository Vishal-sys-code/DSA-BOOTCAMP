import java.util.Scanner;
public class maxandmin {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] arr = new int [5];
        System.out.println("Enter the elements of the array: ");
        for(int i=0; i<arr.length;i++){
            arr[i] = sc.nextInt();
        }
        int max = arr[0];
        int min = arr[0];
        for(int i=0; i<arr.length;i++){
            if(max>arr[i]){
                max = arr[i];
            }
            if(min<arr[i]){
                min = arr[i];
            }
        }
        System.out.println("Maximum Element: " + max);
        System.out.println("Minimum Element: " + min);
        sc.close();
    }
}

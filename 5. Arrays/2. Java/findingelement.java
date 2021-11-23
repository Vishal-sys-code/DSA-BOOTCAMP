import java.util.Scanner;
public class findingelement {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);        
        int [] arr = new int [5];
        System.out.println("Enter the integer to be found");
        int element = sc.nextInt();
        System.out.println("Enter the elements of the array: ");
        for(int i=0; i<arr.length;i++){
            arr[i] = sc.nextInt();
        }
        for(int i=0; i<arr.length;i++){
            if(arr[i] == element){
                System.out.println("Found");
            }
            else{
                System.out.println("Not Found");
            }
        }
        sc.close();
    }
}

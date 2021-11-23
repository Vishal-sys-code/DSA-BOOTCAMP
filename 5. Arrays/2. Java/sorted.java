import java.util.Scanner;
public class sorted {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] arr = new int [5];
        boolean isSorted = false;
        System.out.println("Enter the elements of the array: ");
        for(int i=0; i<arr.length;i++){
            arr[i] = sc.nextInt();
        }
        for(int i=0; i<arr.length;i++){
            if(arr[i] < arr[i+1]){
                isSorted = true;
                break;
            }
        }
        if(isSorted){
            System.out.println("Array is sorted");
        }
        else{
            System.out.println("Array is NOT sorted");
        }
        sc.close();
    }
}

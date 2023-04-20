import java.util.*;
public class largestThree {
    static void largestThree(int arr[],int n){
        int first=Integer.MIN_VALUE,second=Integer.MIN_VALUE,third=Integer.MIN_VALUE;
        if(n<3){
            System.out.println("Invalid input");
            return;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>first){
                third=second;
                second=first;
                first=arr[i];
            }
            else if(arr[i]>second && arr[i]!=first){
                third=second;
                second=arr[i];
            }
            else if(arr[i]>third && arr[i]!=second){
                third=arr[i];
            }
        }
        System.out.println("first: "+first+" second: "+second+" third: "+third);
    }

    public static void main(String[] args) {
        int arr[]={10,2,3,5,50,52};
        int n=arr.length;
        largestThree(arr,n);

    }
}

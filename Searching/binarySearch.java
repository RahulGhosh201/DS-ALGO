import java.util.*;

class binarySearch{
    public static int binarySearch(int arr[],int l,int r,int x){
        while(l<=r){
            int m=l+(r-l)/2;
            if(arr[m]==x)
                return m;
            if(arr[m]<x){
                l=m+1;
            }
            else
                r=m-1;
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[]={10,2,30,4,50,60};
        int x=30;
        int n=arr.length;
        int result=binarySearch(arr, 0, n-1, x);
        if(result==-1){
            System.out.println(x+" not found");
        }
        else{
            System.out.println(x+" is found at "+(result+1));
        }
    }
}
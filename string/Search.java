import java.util.*;

class Search{
    public static void main(String[] args) {
        // String str="GeeksforGeeks is a computer science portal";
        // int firstIndex=str.indexOf('s');
        // System.out.println("First index of 's' is "+firstIndex);
        // int lastIndex=str.lastIndexOf('s');
        // System.out.println("First index of 's' is "+lastIndex);
        // int first_in=str.indexOf('s',10);
        // System.out.println("First occurence of 's' after index 10 is "+first_in);
        // int last_in=str.lastIndexOf('s',20);
        // System.out.println("Last occurence of 's' before index 20 is "+last_in);
        // char char_at=str.charAt(20);
        // System.out.println("Character at 20 is "+char_at);
        // int firstIndex=str.indexOf("Geeks");
        // System.out.println("First index of 'Geeks' is "+firstIndex);
        // int lastIndex=str.lastIndexOf("Geeks");
        // System.out.println("First index of 'Geeks' is "+lastIndex);
        // int first_in=str.indexOf("Geeks",10);
        // System.out.println("First occurence of 'Geeks' after index 10 is "+first_in);
        // int last_in=str.lastIndexOf("Geeks",20);
        // System.out.println("Last occurence of 'Geeks' before index 20 is "+last_in);
        String str="GeeksforGeeks is a computer science portal";
        System.out.println(str.startsWith("Geeks"));
        System.out.println(str.endsWith("portal"));
    }
}
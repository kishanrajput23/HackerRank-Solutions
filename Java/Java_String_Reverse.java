import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String rev="";
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int len = A.length();

        for (int i=len-1; i>=0; i--) {
            rev = rev + A.charAt(i);
        }
        if (rev.equals(A)) {
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
    }
}




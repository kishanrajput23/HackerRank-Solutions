import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        
        int x = in.nextInt();
        try{
            String numStr = Integer.toString( x );
        
            System.out.println("Good job");
            
        }catch(Exception e){
            
            System.out.println("Wrong answer");
        } 
    }
}
import java.io.*;
import java.lang.Math;

class palindrome {
	public static void main (String[] args) {
	    int n = 1232,y;
	    n = Integer.parseInt(args[0]);
	    int x = n;
	    int count = 0;
	    while(x!=0)
	        {
	            count++;
	            x=x/10;
	        }
	    x = n;
	    int sum=0;
	    while(x!=0)
	        {
	            y=x%10;
	            sum+=y*Math.pow(10,count-1);
	            x=x/10;
	            count--;
	        }
	   if(sum==n)
	        System.out.println("is palindrome");
	   else
	        System.out.println("not palindrome");
	    
	}
}
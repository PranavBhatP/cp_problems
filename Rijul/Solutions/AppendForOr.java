/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class AppendForOr
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int y = sc.nextInt();
		    int[] a = new int[n];
		    int r = 0;
		    for(int i = 0;i<n;i++){
		        a[i] = sc.nextInt();
		        r|=a[i];
		    }
		    if(r<=y){
		        if((r^=y)<=y){
		            System.out.println(r);
		        }
		        else{
		            System.out.println("-1");
		        }
		    }
		    else{
		        System.out.println("-1");
		    }
		}
        sc.close();
	}
}

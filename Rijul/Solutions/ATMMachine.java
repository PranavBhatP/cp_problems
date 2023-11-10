import java.util.*;
import java.lang.*;
import java.io.*;

class ATMMachine
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int k = sc.nextInt();
		    int[] a = new int[n];
		    for(int i = 0;i<n;i++){
		        a[i] = sc.nextInt();
		    }
		    String ans = "";
		    for(int i = 0;i<n;i++){
		        if(k>=a[i]){
		            k-=a[i];
		            ans = ans.concat("1");
		        }
		        else{
		            ans = ans.concat("0");
		        }
		    }
		    System.out.println(ans);
		}
		sc.close();
	}
}

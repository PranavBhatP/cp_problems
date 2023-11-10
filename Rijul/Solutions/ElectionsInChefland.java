import java.util.*;
import java.lang.*;
import java.io.*;

class ElectionsInChefland
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int x = sc.nextInt();
		    
		    int[] a = new int[n];
		    
		    for(int i = 0;i<n;i++){
		        a[i] = sc.nextInt();
		    }
		    
		    int ans = 0;
		    
		    for(int i = 0;i<n;i++){
		        if(a[i]>=x){
		            ans++;
		        }
		    }
		    
		    System.out.println(ans);
		}
		sc.close();
	}
}

import java.util.*;
import java.lang.*;
import java.io.*;

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
		    int ans = -1;
		    if(r>y){
		        ans = -1;
		    }
		    else{
		        for(int i = 0;i<=y;i++){
		            if((i|r)==y){
		                ans = i;
		                break;
		            }
		        }
		    }
		    System.out.println(ans);
		}
        sc.close();
	}
}

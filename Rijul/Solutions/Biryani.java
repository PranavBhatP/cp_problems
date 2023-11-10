import java.util.*;
import java.lang.*;
import java.io.*;

class Biryani
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int x, y, cost;
            x = sc.nextInt();
            y = sc.nextInt();
            cost = x*y;
            System.out.println(cost);
        }
        sc.close();
	}
}

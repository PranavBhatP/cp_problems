import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class BoilerplateAdvanced {
    static class FastReader { 
		BufferedReader br; 
		StringTokenizer st; 

		public FastReader() 
		{ 
			br = new BufferedReader( 
				new InputStreamReader(System.in)); 
		} 

		String next() 
		{ 
			while (st == null || !st.hasMoreElements()) { 
				try { 
					st = new StringTokenizer(br.readLine()); 
				} 
				catch (IOException e) { 
					e.printStackTrace(); 
				} 
			} 
			return st.nextToken(); 
		} 

		int nextInt() { return Integer.parseInt(next()); } 

		long nextLong() { return Long.parseLong(next()); } 

		double nextDouble() 
		{ 
			return Double.parseDouble(next()); 
		} 

		String nextLine() 
		{ 
			String str = ""; 
			try { 
				if(st.hasMoreTokens()){ 
					str = st.nextToken("\n"); 
				} 
				else{ 
					str = br.readLine(); 
				} 
			} 
			catch (IOException e) { 
				e.printStackTrace(); 
			} 
			return str; 
		} 
	} 

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        int t = sc.nextInt();
        while(t-->0){
            //Write your code here
        }
    }
}

import java.io.*;
import java.util.*;

public class Main {
	static final Reader in = new Reader();
	static final PrintWriter out = new PrintWriter(System.out);

	public static void main(String[] args) {
		int t=in.nextInt();
//		int t=1;
		for(int i=1; i<=t; ++i)
			new Solver();
		out.close();
	}
	
	static class Solver {
		Solver() {
			int n=in.nextInt(), m=in.nextInt();
			HashSet<Integer> a = new HashSet();
			HashSet<Integer> b = new HashSet();
			for(int i=0; i<n; ++i) {
				int x=in.nextInt();
				a.add(x);
			}
			for(int i=0; i<m; ++i) {
				int x=in.nextInt();
				b.add(x);
			}
			int cnt=0;
			if(n<m) {
				for(Integer x : b)
					if(a.contains(x))
						cnt++;
			} else {
				for(Integer x : a)
					if(b.contains(x))
						cnt++;
			}
			out.println(cnt);
		}
	}
	
	static class Reader {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		String next() {
			while(st==null||!st.hasMoreTokens()) {
				try {
					st=new StringTokenizer(in.readLine());
				} catch(Exception e) {}
			}	
			return st.nextToken();
		}
		int nextInt() {
			return Integer.parseInt(next());
		}
		long nextLong() {
			return Long.parseLong(next());
		}
		double nextDouble() {
			return Double.parseDouble(next());
		}
	}
	
}

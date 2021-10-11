package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q9093 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        while (T-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            StringBuilder sb = new StringBuilder();
            while (st.hasMoreTokens()) {
                String s = st.nextToken();
                for (int i=s.length()-1; i>=0; i--) {
                    sb.append(s.charAt(i));
                }
                if (st.hasMoreTokens()) {
                    sb.append(" ");
                }
            }

            System.out.println(sb);
        }
    }
}

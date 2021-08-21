package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Q10818 {
   public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int max = -1000001;
        int min = 1000001;
        int next;
        while(st.hasMoreTokens()) {
            next = Integer.parseInt(st.nextToken());
            max = (next > max) ? next : max;
            min = (next < min) ? next : min;
        }

        System.out.println(min + " " + max);
        br.close();
   } 
}

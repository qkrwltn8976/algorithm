package Baekjun;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q1546 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        double sum = 0.0;
        int n = Integer.parseInt(br.readLine());
        double max = 0.0;
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        while (st.hasMoreTokens()) {
            double next = Double.parseDouble(st.nextToken());
            max =  next > max ? next : max;
            sum += next;
        }
        
        System.out.println((Math.round((sum / max * 100 / n) * 1000000)) / 1000000.0);
    }
}

package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.Arrays;

public class Q2752 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int[] num = new int[3];
        for (int i=0; i<3; i++) {
            num[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(num);

        StringBuilder sb = new StringBuilder();
        for (int i=0; i<3; i++) {
            sb.append(num[i]);
            if (i != 2) sb.append(" ");
        }
        
        System.out.println(sb);
    }
}

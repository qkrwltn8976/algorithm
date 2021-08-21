package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q3052 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] list = new int[42];
        int cnt = 0;
        
        for (int i=0; i<10; i++) {
            int val = Integer.parseInt(br.readLine()) % 42;
            list[val]++;
        }

        for (int i=0; i<list.length; i++) {
            if (list[i] != 0) {
                cnt++;
            }
        }

        System.out.println(cnt);

        br.close();
    }
}

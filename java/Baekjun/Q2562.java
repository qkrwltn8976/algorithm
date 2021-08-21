package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q2562 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int max = 0;
        int idx = 0;
        int[] list = new int[9];

        for (int i=0; i<list.length; i++) {
            list[i] = Integer.parseInt(br.readLine());
        }
        for (int i=0; i<list.length; i++) {
            if (list[i] > max) {
                max = list[i];
                idx = i+1;
            }
        }

        System.out.println(max);
        System.out.println(idx);

        br.close();
    }
}

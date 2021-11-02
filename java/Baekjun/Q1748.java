package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q1748 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int sum = 0;
        int num = 10;
        int cnt = 1; // 자리수
        for (int i=1; i<=n; i++) {
            if (i % num == 0) {
                cnt++;
                num *= 10;
            }
            sum += cnt;
        }

        System.out.println(sum);
    }
}

package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q5585 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine()); // 타로가 지불할 돈(1 이상 1000미만의 정수) 1개
        int cnt = 0;
        n = 1000 - n;

        if (n >= 500) {
            int num = n/500;
            n -= num * 500;
            cnt += num;
        }

        if (n >= 100) {
            int num = n/100;
            n -= num * 100;
            cnt += num;
        }

        if (n >= 50) {
            int num = n/50;
            n -= num * 50;
            cnt += num;
        }

        if (n >= 10) {
            int num = n/10;
            n -= num * 10;
            cnt += num;
        }

        if (n >= 5) {
            int num = n/5;
            n -= num * 5;
            cnt += num;
        }

        if (n > 0) {
            cnt += n;
        }

        System.out.println(cnt);
    }
}

package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q2839 {
    // 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int cnt = 0;
        while (true) {
            if (n % 5 == 0) {
                cnt += n / 5;
                break;
            } 
            // n이 5로 나눠떨어질 때까지 3키로를 사용한다.
            n -= 3;
            cnt++;
            if (n < 0) {
                // 정확하게 N킬로그램을 만들 수 없다면 -1
                cnt = -1;
                break;
            }
        }
        System.out.println(cnt);
    }
}

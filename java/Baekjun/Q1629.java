package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Q1629 {
    // A, B, C는 모두 2,147,483,647 이하의 자연수
    // 단순하게 for문을 돌리면 시간복잡도 문제
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        long a = Long.parseLong(st.nextToken());
        long b = Long.parseLong(st.nextToken());
        long c = Long.parseLong(st.nextToken());

        System.out.println(pow(a, b, c) % c);
    }

    public static long pow(long a, long b, long c) {
        if (b == 0) {
            return 1;
        } else if (b == 1) {
            return a;
        } 
        long temp = pow(a, b/2, c) % c;
        if (b % 2 == 0) {
            return temp * temp % c;
        } else {
            return (temp * temp % c) * a % c;
        }
    }
}

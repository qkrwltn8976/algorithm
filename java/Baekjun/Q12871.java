package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q12871 {
    // s의 길이와 t의 길이에 대해 최소공배수를 구한다 (유클리드 호제법 이용)
    // 최소공배수/자신의 길이 만큼 for문을 통해 s, t 의 길이를 최소공배수가 될 때까지 더해준다.
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        String t = br.readLine();
        int slen = s.length();
        int tlen = t.length();

        if (slen != tlen) {
            int lcm = lcm(slen, tlen);
            String str1 = s;
            String str2 = t;

            while (s.length() != lcm) {
                s += str1;
            }
            
            while (t.length() != lcm) {
                t += str2;
            }
        }
        
        if (s.equals(t)) {
            System.out.println(1);
        } else {
            System.out.println(0);
        }

    }

    private static int gcd(int a, int b) {
        if (b==0) return a;
        return gcd(b, a%b);
    }

    private static int lcm(int a, int b) {
        return (a*b)/gcd(a, b);
    }
}

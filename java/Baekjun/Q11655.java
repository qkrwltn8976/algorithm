package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q11655 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        String s = br.readLine();
        for (int i=0; i<s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isUpperCase(c)) {
                int n = c + 13;
                if (n > 90) n -= 26;

                sb.append((char)n);
            } else if (Character.isLowerCase(c)) {
                int n = c + 13;
                if (n > 122) n -= 26;

                sb.append((char)n);
            }
            else {
                sb.append(c);
            }
        }
        System.out.println(sb);
    }
}

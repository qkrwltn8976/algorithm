package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q10820 {
    public static void main(String[] args) throws IOException {
        // 소문자, 대문자, 숫자, 공백의 개수
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = "";
        while ((s = br.readLine()) != null) { // BufferedReader 로 EOF 처리
            int lower = 0;
            int upper = 0;
            int digit = 0;
            int whitespace = 0;
            for (int i=0; i<s.length(); i++) {
                Character c = s.charAt(i);
                if (Character.isLowerCase(c)) {
                    lower++;
                } else if (Character.isUpperCase(c)) {
                    upper++;
                } else if (Character.isDigit(c)) {
                    digit++;
                } else if (Character.isWhitespace(c)) {
                    whitespace++;
                }
            }
            System.out.println(lower + " " + upper + " " + digit + " " + whitespace);
        }
    }
}

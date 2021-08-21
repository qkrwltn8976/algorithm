package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q10987 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        String vowel = "aeiou";
        int cnt = 0;
        for(int i=0; i<str.length(); i++) {
            if(vowel.indexOf(str.charAt(i)) > -1) {
                cnt++;
            }
        }

        System.out.println(cnt);
    }
}

package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q1110 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int read = Integer.parseInt(br.readLine());
        int cnt = 0;
        int sum = 0;
        int num = read;
        while(true) { // 새로운 수 : num, 조합 : sum
            if(num < 10) {
                sum = num * 10;
            } 
            sum = num % 10 + num / 10;
            num = num % 10 * 10 + sum % 10;
            cnt++;
            if(read == num) {
                System.out.println(cnt);
                break;
            }
        }
    }
}

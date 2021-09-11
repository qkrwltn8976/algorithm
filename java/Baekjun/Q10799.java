package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Stack;

public class Q10799 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();

        int cnt = 0;
        Stack<Character> stack = new Stack<Character>();
        for (int i=0; i<str.length(); i++) {
            if (stack.size() !=0 && str.charAt(i) == ')') {
                stack.pop();
                if (str.charAt(i-1) == '(') {
                    cnt += stack.size();
                } else {
                    cnt += 1;
                }  
            } else {
                stack.push(str.charAt(i));
            }
        }

        System.out.println(cnt);
    }
}

// 레이저일 때 + 스택 크기
// 레이저가 아닌 막대기 끝일 때 + 1
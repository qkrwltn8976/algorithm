package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;
// 태그가 참으로 변하거나, 혹은 문장이 끝나거나 혹은 공백을 만났을 때 stack의 단어를 pop
public class Q17413 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine() + "\n";
        StringBuilder sb = new StringBuilder();
        Stack<Character> stack = new Stack<>();

        boolean isTag = false;
       
        for (int i=0; i<s.length(); i++) {
            char c = s.charAt(i);
            if (c == '<') isTag = true;
           
            if (isTag || c == ' ' || c == '\n') {
                while (!stack.isEmpty()) {
                    sb.append(stack.pop()); // 단어 모두 뒤집기
                }
                if(c != '\n') sb.append(c);
            } else {
                stack.push(c);
            }

            if (c == '>') isTag = false;
            
        }
        

        System.out.println(sb);
    }
}

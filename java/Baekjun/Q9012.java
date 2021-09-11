package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Stack;

public class Q9012 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        Stack<Character> st = new Stack<Character>();

        int n = Integer.parseInt(br.readLine());
        while (n-- > 0) {
            String str = br.readLine();
            for (int i=0; i<str.length(); i++) {
                if (str.charAt(i) == '(') {
                    st.push('(');
                } else if (str.charAt(i) == ')') {
                    if (!st.isEmpty() &&st.peek() == '(') {
                        st.pop();
                    } else {
                        st.push(')');
                    }
                } 
            }
            
            System.out.println(st.isEmpty() ? "YES" : "NO");
            st.clear();
        }
    }
}

package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.LinkedList;
import java.util.Queue;

public class Q2161 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        Queue<Integer> queue = new LinkedList<>();
        
        for (int i=0; i<n; i++) {
            queue.offer(i+1);
        }

        StringBuffer sb = new StringBuffer();

        while (!queue.isEmpty()) {
            sb.append(queue.poll());
            
            if (queue.size() != 0) {
                sb.append(" ");
                queue.offer(queue.poll());
            }
        }

        System.out.println(sb);
    }
}

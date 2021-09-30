package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.LinkedList;
import java.util.Queue;

public class Q1158 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());

        Queue<Integer> queue = new LinkedList<>();

        for (int i=0; i<n; i++) {
            queue.offer(i+1);
        }

        StringBuilder s = new StringBuilder();
        s.append("<");

        while (!queue.isEmpty()) {
            for (int i=0; i<k; i++) {
                if (i == k-1) {
                    s.append(queue.poll());
                } else {
                    queue.offer(queue.poll());
                    // k번째가 아닐경우 맨뒤로 이동
                }
            }
                
            if (queue.size() == 0) {
                s.append(">");
            } else {
                s.append(", ");
            }
        }

        System.out.println(s);  
    }
}

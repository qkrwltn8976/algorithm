package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.PriorityQueue;

public class Q1655 {
   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       int N = Integer.parseInt(br.readLine());
       PriorityQueue<Integer> min_pq = new PriorityQueue<>();
       PriorityQueue<Integer> max_pq = new PriorityQueue<>((o1, o2) -> o2 - o1);
       StringBuilder sb = new StringBuilder();

       while (N-- > 0) {
           int val = Integer.parseInt(br.readLine());
           if (max_pq.size() == min_pq.size()) {
               max_pq.offer(val);
           } else {
               min_pq.offer(val);
           }

           if (!max_pq.isEmpty() && !min_pq.isEmpty() && max_pq.peek() > min_pq.peek()) {
               int tmp = min_pq.poll();
               max_pq.offer(tmp);
               min_pq.offer(max_pq.poll());
           }  
           sb.append(max_pq.peek() + "\n");
       }
       System.out.println(sb);
   } 
}

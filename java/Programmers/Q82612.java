package Programmers;

class Q82612 {
    public long solution(int price, int money, int count) {
        long answer = -1;
        long tot = 0;
        for (int i=1; i<=count; i++) {
            tot += price * i;
        }
        
        answer = money - tot > 0 ? 0: tot - money;
        return answer;
    }
}

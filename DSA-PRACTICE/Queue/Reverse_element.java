package Queue;

import java.util.*;

public class Reverse_element {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();

        Queue<Integer> q = new LinkedList<>();
        Stack<Integer> st = new Stack<>();

        for (int i = 0; i < n; i++) {
            q.offer(sc.nextInt());
        }

        for (int i = 0; i < k; i++) {
            st.push(q.poll());
        }

        while (!st.isEmpty()) {
            q.offer(st.pop());
        }

        for (int i = 0; i < n - k; i++) {
            q.offer(q.poll());
        }

        while (!q.isEmpty()) {
            System.out.print(q.poll());
            if (!q.isEmpty()) {
                System.out.print(" ");
            }
        }
    }
}

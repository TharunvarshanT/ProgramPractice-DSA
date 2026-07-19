import java.util.*;

public class ReverseQueue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        Queue<Integer> queue = new LinkedList<>();
        Stack<Integer> st = new Stack<>();

        for (int i = 0; i < n; i++) {
            queue.offer(sc.nextInt());
        }

        while (!queue.isEmpty()) {
            st.push(queue.poll());
        }

        while (!st.isEmpty()) {
            queue.offer(st.pop());
        }

        while (!queue.isEmpty()) {
            System.out.print(queue.poll());
            if (!queue.isEmpty()) {
                System.out.print(" ");
            }
        }
    }
}
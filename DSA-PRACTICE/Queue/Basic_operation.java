
import java.util.*;

public class Basic_operation {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(System.in);

        int q = sc.nextInt();
        sc.nextLine();

        Queue<Integer> queue = new LinkedList<>();

        while (q-- > 0) {
            String s = sc.nextLine();
            String[] a = s.split(" ");

            if (a[0].equals("ENQUEUE")) {
                queue.offer(Integer.parseInt(a[1]));
            } else if (a[0].equals("DEQUEUE")) {
                if (queue.isEmpty()) {
                    System.out.println("EMPTY");
                } else {
                    System.out.println(queue.poll());
                }
            } else if (a[0].equals("FRONT")) {
                if (queue.isEmpty()) {
                    System.out.println("EMPTY");
                } else {
                    System.out.println(queue.peek());
                }
            } else if (a[0].equals("SIZE")) {
                System.out.println(queue.size());
            }
        }
    }
}
import java.util.*;

class Node {
    int val;
    Node next;

    Node(int val) {
        this.val = val;
        this.next = null;
    }
}

public class Postfix_expression {
    static Node top = null;

    static void push(int ch) {
        Node newNode = new Node(ch);
        newNode.val = ch;
        newNode.next = top;
        top = newNode;
    }

    static int pop() {
        int temp = 0;
        if (top != null) {
            temp = top.val;
            top = top.next;
        }
        return temp;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch >= '0' && ch <= '9') {
                push(ch - '0');
            } else {
                if (top != null && top.next != null) {
                    int val1 = pop();
                    int val2 = pop();
                    switch (ch) {
                        case '+':
                            push(val1 + val2);
                            break;
                        case '*':
                            push(val1 * val2);
                            break;
                        case '/':
                            push(val1 / val2);
                            break;
                        case '-':
                            push(val1 - val2);
                            break;
                    }
                }
            }

        }
        sc.close();
        if (top != null) {
            System.out.print(top.val);
            return;
        }

        return;

    }

}

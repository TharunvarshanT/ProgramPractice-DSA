import java.util.Scanner;

class Node {
    int val;
    Node next;
    Node(int val){
        this.val = val;
        this.next = null;
    }
}

public class min_stack {
    static Node top = null;
    static Node mintop = null;

    // push , pop , peek , in stack

    static void push(int data){
        Node newNode = new Node(data);
        newNode.next = top ;
        top = newNode;
    }

    static void pop(){
        if(top != null ){
            top = top.next;
        }
    }

    static int peek(){
        if(top == null ) return '\0';
        return top.val;
    }

    // push , pop , peak in minStack

    static void pushmin(int data){
        Node newNode = new Node(data);
        newNode.next = mintop;
        mintop = newNode;
    }

    static void popmin(){
        if(mintop != null){
            mintop = mintop.next;
        }
    }

    static int peekmin(){
        if(mintop == null){
            return '\0';
        }
        return mintop.val;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        while(n-- > 0){
            String str = sc.next() ;
            if(str.equals("PUSH")){

                int x = sc.nextInt();
                
                push(x);

                if(mintop == null || x <= mintop.val){
                    pushmin(x);
                }
            }
            else if(str.equals("POP")){
                if(top != null){
                    if(peek() == peekmin()){
                        popmin();
                    }
                    pop();
                }
            }
            else{
                if(mintop == null ){
                    System.out.println("EMPTY STACK");
                }
                else{
                    System.out.print("min :" + mintop.val);
                }
            }
        }
        sc.close();
        return;
    }
}

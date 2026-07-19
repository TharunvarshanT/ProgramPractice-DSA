import java.util.*;

class Node{
    char val;
    Node next;
    Node(char val){
        this.val = val ;
        this.next = null;
    }
}

public class Remove_adj_num {
    static Node top = null ;

    // create operations

    static void push(char data){
        Node newNode = new Node(data);
        newNode.val = data;
        newNode.next = top;
        top = newNode ;
    }

    // delete operations

    static void pop(){
        if(top !=  null){
            top = top.next;
        }
    }

    // show top val

    static char peek(){
        if(top == null)  return '\0';        
        return top.val;
    }
    
    // check empty

    static boolean isEmpty(){
        return top != null;
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String str = sc.next();

        for(int i = 0 ; i < str.length() ;i++){
            char ch = str.charAt(i);
            if(isEmpty() && peek() == ch){
                pop();
            }
            else{
                push(ch);
            }
        }

        if(top == null){
            System.out.print("EMPTY");
            sc.close();
            return;
        }
        StringBuilder sb = new StringBuilder();
        while(top != null){
            sb.append(top.val);
            top = top.next;
        }
        for(int i = sb.length()-1 ; i >= 0 ; i--){
            System.out.print(sb.charAt(i));
        }
        sc.close();
        return ;
    }


}

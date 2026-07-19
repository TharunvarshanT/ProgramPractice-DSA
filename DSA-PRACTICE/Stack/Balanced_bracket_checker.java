import java.util.Scanner;
public class Balanced_bracket_checker{
    public static void main(String args[]){
        try (Scanner sc = new Scanner(System.in)) {
            int top = -1;
            String str = sc.next();
            char[] stack = new char[str.length()] ;
            int i = 0; 
            while(i < str.length() ){
                if(str.charAt(i) == '(' || str.charAt(i) == '{' || str.charAt(i) == '['){
                    stack[++top] = str.charAt(i++);
                    continue;
                }
                if(top == -1){
                    System.out.print("Invalid");
                    return;
                }
                if(str.charAt(i) == ')' && stack[top] == '(' || 
                   str.charAt(i) == '}' && stack[top] == '{' || 
                   str.charAt(i) == ']' && stack[top] == '[' ){
                    
                    --top;
                    i++;

                }
                else{
                    System.out.println("Invalid");
                    return;
                }
            }
            
            if(top == -1){
                System.out.println("valid");return ;
            }
            System.out.println("Invalid");
        }
    }
}
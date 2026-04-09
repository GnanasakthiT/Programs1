import java.util.Scanner;
import java.util.Stack;

public class Main{
	public static void main(){
		Scanner myScanner = new Scanner(System.in);
		int testCases = myScanner.nextInt();
		while(testCases-->0){
			solve(myScanner);
		}
	}
	private static void solve(Scanner getInput){
		
		int size = getInput.nextInt();
		getInput.nextLine();
		String myStr = getInput.nextLine();
		//System.out.println(myStr);
		
		Stack<Character> charStack = new Stack<>();
		
		for(int i = 0; i < myStr.length(); i++){
			if(!charStack.isEmpty() && charStack.peek() == myStr.charAt(i)){
				charStack.pop();
			}
			else{
				charStack.push(myStr.charAt(i));
			}
		}
		
		System.out.println(charStack.isEmpty() ? "YES" : "NO");
	}
}
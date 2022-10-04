/*Sieve of Eratosthenes
This method is used to find whether the number
from 1 to N is Prime or not
*/

import java.util.*;



public class Main
{
    static boolean[] sieve (int n){
    boolean isPrime[] = new boolean[n + 1];
    Arrays.fill(isPrime, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i=2; i*i<=n; i++){
        for(int j=2*i; j<=n; j+=i){
            isPrime[j] = false;
        }
    }
    return isPrime;
}
    
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		boolean isPrime[] = sieve(n);
		for(int i=0; i<=n; i++){
		    System.out.println(i + " " + isPrime[i]);
		}
	}
}
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
  public static void main (String[]args) throws java.lang.Exception
  {
    Scanner sc = new Scanner (System.in);
    int t = sc.nextInt ();

    while (t-- > 0)
      {

	int n = sc.nextInt ();

	int[] arr1 = new int[n];
	int[] arr2 = new int[n];

	int scp = 0;

	for (int i = 0; i < n; i += 1)
	  {
	    arr1[i] = sc.nextInt ();
	  }

	for (int i = 0; i < n; i += 1)
	  {
	    arr2[i] = sc.nextInt ();
	  }

	int canProxy = 0;
	int ans = 0;

	for (int i = 0; i < n; i++)
	  {

	    if (arr1[i] == 1)
	      {
		canProxy += 1;
	      }

	    if (arr1[i] == 1)
	      {
		ans += 1;
	      }

	    else if (arr1[i] == 0 && arr2[i] == 0 && canProxy > 0)
	      {
		ans += 1;
		canProxy -= 1;
	      }
	  }

	System.out.println (ans);
      }
  }
}

/*

	DP -> save values of States that Overlap
	State -> set of parameters that give you a Unique answer eg, level in rec[level]
*/

- to optimise a recursion into a dp problem, you have to choose correct states
- the states should be such that the previous computations can be easily available within the states
- eg dp(level, timespent, itemtaken)
- NOTE: timespent, itemtaken must be within feasible numeric limits
- _________ []
- (if same itemtaken, timespent) and we reach level, then we'll always have the same ans

	    TC:
	    - F(x) = F(x-1) + F(x-2) + F(x-3)
	    O(3^N)
	    on caching, O(N) + 3 = O(N) [N - no of levels of the dp]

	    2 kinds of DP:
	    - iterative dp (depends on the order of evaluation)
	    - recursive dp (D.N depend on the order of computation)

	    In DP:
	    - Time Complexity Decreases, Space Comp Increases

	    Order of dp params need not be the same in the dp array:
	    - dp(a, b, c) (0-9, 0-99, 0-999)
	    - cache[b][a][c] = cache[100][10][1000]
	    - just make sure to access in the correct order in the func
	    - worst int arr size you can go to is 10^8, > 1e8 will give you MLE
	    - in global scope, max size is 1e8 (bcoz created in heap)
	    - in local scope, in main scope, max size is 2*1e6(bcoz created in stack)
	    - https://stackoverflow.com/questions/32409910/why-on-declaring-an-array-global-in-c-the-size-that-it-can-be-given-is-larger
	    - dp[less_sz][more_sz] >> dp[more_sz][less_sz] .e, dp[2][10] >> dp[10][2]
	    - cache coherence problem
	    - dp[10][100][1000], also dp[1000000] ,also dp[1000][1000]
	    - a, b, c can be compressed to x = a*10^5 + b*10^3 + c, then later a,b,c can be retrieved from x



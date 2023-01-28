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


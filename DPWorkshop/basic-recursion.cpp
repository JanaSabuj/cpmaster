// LCCM - Level, Choices, Check, Move
// basic dp snippet for all problems

// ----- General DP format -------
// x = level
int dp(int x) {
	// pruning

	// base case

	// compute
	for (auto c : choices) {
		if (checkValid(c)) {
			move(c)
		}
	}
}

// 1. ----- Staircase problem ------
// find total number of ways
int n;// global
int cache[1001]; // dp array
int rec(int x) {
	// pruning
	if (x > n) return 0;// invalid cases in counting problems generally return 0

	// base case
	if (x == n) return 1; // generally, in counting problems, base case returns 1 or 0

	// dp
	if (cache[x] != -1)
		return cache[x];

	// compute
	int ways = 0;
	for (step = 1; step <= 3; step++) {
		if (x + step <= n) {
			ways += rec(x + step);
		}
	}

	return cache[x] = ways;// updt dp
}

memset(cache, -1, sizeof(cache));// init dp as -1
// Ans = rec(1)

// 2. ---- N Queen Problem ------
// find total number of ways
// to memoise it, we can do dp(level, queens) -> but queens is always unique, so it is a backtracking prob and not dp
int N;
int queen[20];

// check if (r,c) is a valid position - may access previous choices
int valid(int r, int c) {
	for (int x = 0; x < r; x++) {
		int prow = x;
		int pcol = queen[prow];

		if (c == pcol || abs(c - pcol) == abs(r - prow)) {
			return 0;
		}
	}

	return 1;
}

int rec(int level) {
	// pruning

	// base
	if (level == N) {
		return 1;// if you've exhausted filling the board and come this far, then congo, you have got 1 answer
	}

	// compute
	int ways = 0;
	for (int col = 0; col < N; col++) {
		if (valid(level, col)) {
			// place the queen
			queen[level] = col;
			// move
			ways += rec(level + 1);
			// undo
			queen[level] = -1;
		}
	}

	return ways;
}

memset(queen, -1, sizeof(queen));
// Ans = rec(0); [0-N-1] rows,

// 3. { time[i], skill[i] } - maximise skill using X hrs and K slots
int t[1001], s[1001];
int x, k;
int n; // n workshops
int taken[1001];

int valid(int level) {
	int timeused = 0, slotsused = 0;
	for (int i = 0; i < level; i++) {
		if (taken[i]) {
			timeused += t[i];
			slotsused++;
		}
	}

	timeused += s[level];
	slotsused++;

	if (timeused <= x and slotsused <= k)
		return 1;

	return 0;
}

// rec[level] = max skill obtainable from arr[level..n-1]
int rec(int level) {
	// pruning

	// basecase
	if (level == n) return 0;// usually 0 is returned for finding MAX

	// compute
	int maxskill = 0;

	// choice1: dont take
	maxskill = rec(level + 1);

	// choice2: take
	if (valid(level)) {
		taken[level] = 1;
		maxskill = max(maxskill, s[level] + rec(level + 1));
		taken[level] = 0;
	}

	// return
	return maxskill;
}

// Ans: rec(0)

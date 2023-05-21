class Solution {
public:
	void push(int &f, int nums[][2], int x, int y,int a1[][100])
	{
		f = (f + 1) % 1000;
		nums[f][0] = x;
		nums[f][1] = y;
		a1[x][y] = 1;
	}
	int shortestBridge(vector<vector<int>>& A) {
		int i, j,m,n;
		int size = A.size();
		int a1[100][100] = { 0 };
		for (i = 0; i < size; ++i)
			for (j = 0; j < size; ++j)
				if (A[i][j] == 1) m = i*size + j;
		a1[m / size][m % size] = 1;
		int nums[1000][2] = { { m / size,m % size } }, f = 0,b=999;
		while (f!=b)
		{
			b = (b + 1) % 1000;
			int x = nums[b][0], y = nums[b][1];
			if (x > 0 && A[x - 1][y] == 1 && a1[x - 1][y] == 0)
				push(f, nums, x - 1, y, a1);
			if (y > 0 && A[x][y - 1] == 1 && a1[x][y - 1] == 0)
				push(f, nums, x, y - 1, a1);
			if (y + 1 < size && A[x][y + 1] == 1 && a1[x][y + 1] == 0)
				push(f, nums, x, y + 1, a1);
			if (x + 1 < size && A[x + 1][y] == 1 && a1[x + 1][y] == 0)
				push(f, nums, x + 1, y, a1);
		}
		m = 0;
		while (1)
		{
			m++;
			vector<vector<int>> vv;
			for(i=0;i<size;++i)
				for (j = 0; j < size; ++j)
					if (a1[i][j] == 1)
					{
						if (i > 0) vv.push_back({ i - 1,j });
						if (j > 0) vv.push_back({ i,j - 1 });
						if (i < size - 1) vv.push_back({ i + 1,j });
						if (j < size - 1)vv.push_back({ i,j + 1 });
					}
			for (const vector<int>& i : vv)
			{
				int x = i[0], y = i[1];
				if (A[x][y] == 1 && a1[x][y] == 0) return m - 1;
				a1[x][y] = 1;
			}	
		}
	}
};
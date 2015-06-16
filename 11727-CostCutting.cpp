//UVa
//11727 - Cost cutting

#include <algorithm>
#include <cmath>
#include <cstdio>

int main()
{
	int a, b, c, n;
	scanf("%d", &n);

	for(int i = 1; i < n + 1; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		printf("%s %d: %d\n", "Case", i, a + b + c - std::max(a, std::max(b, c)) - std::min(a, std::min(b, c)));
	}

	return 0;
}





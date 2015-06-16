//UVa
//11498 - Division of Nlogonia

#include <cstdio>

int main()
{
	int a, b, c, d, k;

	while(scanf("%d", &k) == 1)
	{
		if(k == 0)
			break;

		scanf("%d %d", &a, &b);
		for(int i = 0; i < k; i++)
		{
			scanf("%d %d", &c, &d);
			if(a == c || b == d)
				printf("divisa\n");
			else if(c > a && d > b)
				printf("NE\n");
			else if(c > a)
				printf("SE\n");
			else if(d > b)
				printf("NO\n");
			else
				printf("SO\n");
		}
	}

	return 0;
}





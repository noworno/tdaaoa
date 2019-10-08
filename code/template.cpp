#include<cstdio>

int main(int argc, char const *argv[])
{
	freopen("in.txt", "r", stdin);
	int a,f;
	for (int i = 0; i < 12; ++i)
	{
		/* code */
		f = scanf("%d", &a);
		if(f == -1) break;
		// process data
		printf("%d --- %d\n", f, a);
	}
	return 0;
}
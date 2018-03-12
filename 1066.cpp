#include <cstdio>

int main()
{
	int N, M, A, B, C, a;
	scanf("%d %d %d %d %d", &M, &N, &A, &B, &C);
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			scanf("%d",&a);
			if(A <= a && B >= a)
				a = C;
			printf("%03d%c",a,j == N - 1? '\n' : ' ');
		}
	}
	return 0;
}


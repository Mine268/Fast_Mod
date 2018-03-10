#include "stdio.h"

int powMod(long long base,long long n,long long c) {
	long long ans = 1, b = n;
	base = base % c;
	while(b != 0) {
		if(b & 1 == 1)
			ans = ans * base % c;
		base = base * base % c;
		b >>= 1;
	}
	return ans;
}

int main() {
	long long base, n, c;
	scanf("%lld %lld %lld", &base, &n, &c);
	long long ans = powMod(base, n, c);
	printf("%d", ans);
	return 0;
}

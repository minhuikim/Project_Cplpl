#include <vector>

long long sum(std::vector<int> &a)
{
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		ans += a[i];
	}
	return ans;
}

int main()
{
	int n;
	long long re;
	scanf_s("%d", &n);
	std::vector<int> num(n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &num[i]);
	}
	re = sum(num);
	printf("%lld", re);
	return 0;
}
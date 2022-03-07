#include <iostream>
using namespace std;

int main()
{
	int v, a, b, goal;
	cin >> a >> b >> v;

	if((v - a) % (a - b) == 0)
		goal = (v - a) / (a - b);
	else
		goal = (v - a) / (a - b) + 1;

	//goal = (v-a)%(v-b);

	cout << goal + 1;
}
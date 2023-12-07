#include <fstream>
using namespace std;
int main()
{
	ifstream f("sume4.in");
	int n;
	f >> n;
	int ana = 0, maria = 0;
	while (n > 0)
	{
		int x;
		f >> x;
		int a = x/1000;
		int b = x/100%10;
		int c = x%100;
		ana += a, maria += c;
		if (a < c) ana += b;
		else if (c < a) maria += b;
		n--;
	}
	f.close();
	ofstream g("sume4.out");
	g << ana << ' ' << maria;
	g.close();
	return 0;
}

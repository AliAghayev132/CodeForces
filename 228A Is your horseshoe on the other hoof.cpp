//228A Is your horseshoe on the other hoof
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> colors;
	for (int i = 0; i < 4; i++)
	{
		int temp;
		cin >> temp;
		colors.push_back(temp);
	}

	std::sort(colors.begin(), colors.end());
	auto x = std::unique(colors.begin(), colors.end());

	colors.erase(x, colors.end());
	cout << 4 - colors.size();
}
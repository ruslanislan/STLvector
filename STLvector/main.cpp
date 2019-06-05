#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <int> farr;
	int i;
	//cin >> i;

	
	for (size_t t = 0; t < 6; t++)
	{
		while (!(cin >> i))
		{
			cout << "I isn't number" << endl;
			cin.clear();
			while (cin.get() != '\n');
		}
		farr.push_back(i);
	}
	cout << "Good" << endl;

	while (!(cin >> i))
	{
		cin.clear();
		while (cin.get() != '\n');
	}
	
	if (i < farr.size())
	{
		cout << farr.at(i) << endl;
	}
	else
		cout << "Out of range" << endl;

	while (!(cin >> i))
	{
		cin.clear();
		while (cin.get() != '\n');
	}

	auto fi = find(farr.cbegin(), farr.cend(), i);
	if (fi != farr.end())
	{
		cout << "yea, vector have this number" << endl;
	}
	else
		cout << "Noa, vector hasn't this numb" << endl;

	cout << "total" << endl;

	for (auto t : farr)
	{
		cout << t << endl;
	}

	system("pause");
	return 0;
}
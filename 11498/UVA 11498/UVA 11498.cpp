// UVA 11498.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>

using namespace std;


int main()
{
	int t;
	double origin_x, origin_y;
	double x, y;

	while (cin >> t)
	{
		if (!t) break;

		cin >> origin_x >> origin_y;

		for (int i = 0; i < t; i++)
		{
			cin >> x >> y;

			if (x == origin_x || y == origin_y) cout << "divisa" << endl;
			else if (x > origin_x && y < origin_y) cout << "SE" << endl;
			else if (x < origin_x && y < origin_y) cout << "SO" << endl;
			else if (x < origin_x && y > origin_y) cout << "NO" << endl;
			else cout << "NE" << endl;
		}
	}
	_gettche();
	return 0;
}
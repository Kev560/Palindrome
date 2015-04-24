#include <iostream>
#include <string>
using namespace std;

int main()
{
	string k;
	do{
		cout << "\n Enter word:" << endl;
		cin >> k;
		int x = k.size();
		int count = 0;
		for (int i = 0; i < x; i++)
		{
			for (int j = x - 1; j >= 0; j--)
			{
				if (k[i] == k[j])
				{
					count += 1;
				}

			}
		}
		if (count == x)

			cout << k << " is not a palindrome" << endl;
		else
			cout << k << " is a palindrome" << endl;
	}
	while (k != "EXIT");
	
	system("pause");
	return 0;
}
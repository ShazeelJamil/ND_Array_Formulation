#include<iostream>
using namespace std;
enum ArrayMapping { ROW_MAJOR, COLUMN_MAJOR };
void printND(int N, ArrayMapping = ROW_MAJOR);

int main()
{
	printND(4,COLUMN_MAJOR);
	return 0;
}

void printND(int N, ArrayMapping map)
{
	if(map==ROW_MAJOR)
		for (int i = 1; i <= N; i++)
		{
			cout << 'I' << i;
			for (int j = i + 1; j <= N; j++)
				cout << '*' << 'D' << j;
			if(i!=N)
				cout << " + ";
		}
	else
		for (int i = N; i >=1; i--)
		{
			cout << 'I' << i;
			for (int j = i - 1; j >= 1; j--)
				cout << '*' << 'D' << j;
			if (i != 1)
				cout << " + ";
		}
	cout << '\n';
}

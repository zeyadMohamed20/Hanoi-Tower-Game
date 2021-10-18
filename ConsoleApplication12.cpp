#include <iostream>
using namespace std;
void print_move(int start, int end)
{
	cout << start << " ---> " << end << "\n";
}
void hanoi_tower(int n,int start,int end)
{
	int other{};
	if (n == 1)
	{
		print_move(start, end);
	}
	else
	{
		other = 6 - (start + end);
		hanoi_tower(n - 1,start,other);
		print_move(start, end);
		hanoi_tower(n - 1, other, end);
	}
}
int main()
{
	int rings{};
	int start{};
	int end{};

	cout << "Enter the number of rings\n";
	cin >> rings;
	cout << "Enter the number of starting rod\n";
	cin >> start;
	cout << "Enter the number of ending rod\n";
	cin >> end;
	hanoi_tower(rings, start, end);
}


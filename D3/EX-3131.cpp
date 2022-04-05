#define MAX 1000000

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	bool visited[MAX + 1];

	memset(visited, true, sizeof(visited));

	for (int i = 2; i * i <= MAX; i++)
		if (visited[i] == true)
			for (int j = i; j * i <= MAX; j++)
				visited[i * j] = false;

	for (int i = 2; i <= MAX; i++)
		if (visited[i])
			printf("%d ", i);
	
	printf("\n");

	return 0;
}
#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	int day;
	char in[10], year[5], month[3], date[3];

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> in;

		for (int i = 0; i < 4; i++)
			year[i] = in[i];
		year[4] = '\0';
		for (int i = 0; i < 2; i++)
			month[i] = in[4 + i];
		month[2] = '\0';
		for (int i = 0; i < 2; i++)
			date[i] = in[6 + i];
		date[2] = '\0';
		day = 10 * (in[6] - '0');
		day += in[7] - '0';
		int tok = 0;

		if ((!strcmp(month, "01")) || (!strcmp(month, "03")) || (!strcmp(month, "05")) || (!strcmp(month, "07")) || (!strcmp(month, "08")) || (!strcmp(month, "10")) || (!strcmp(month, "12")))
		{
			if (day > 31)
				tok = 1;
		}
		else if ((!strcmp(month, "04")) || (!strcmp(month, "06")) || (!strcmp(month, "09")) || (!strcmp(month, "11")))
		{
			if (day > 30)
				tok = 1;
		}
		else if (!strcmp(month, "02"))
		{
			if (day > 28)
				tok = 1;
		}
		else
			tok = 1;

		if (tok == 1)
			printf("#%d %d\n", test_case, -1);
		else
			printf("#%d %s/%s/%s\n", test_case, year, month, date);
	}
	return 0;
}
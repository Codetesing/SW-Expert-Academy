#define _CRT_SECURE_NO_WARNINGS
#define INPUT_SIZE 31
#define TOK_SIZE 11

#include <iostream>
#include <cstring>

using namespace std;

bool IS_TOKEN(char* tok, int size, char* in, int start, int end)
{
	if (size == 0)
		return false;

	for (int i = 0; i < size; i++)
		if (tok[i] != in[start++])
			return false;

	return true;
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		char in[INPUT_SIZE];
		char tok[INPUT_SIZE];

		cin >> in;

		int size = 0;
		int len = strlen(in);

		for(int i = 0; i < len; i++)
		{
			if (IS_TOKEN(tok, size, in, i, len))
				break;
			tok[size++] = in[i];
		}
		tok[size] = '\0';

		printf("#%d %d\n", test_case, size);
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
//Given a string S, remove consecutive duplicates from it recursively.(do recursively)
#include <bits/stdc++.h>
using namespace std;

void rD(char S[])
{
	if (S[0] == '\0')
		return;
	if (S[0] == S[1]) {
		int i = 0;
		while (S[i] != '\0') {
			S[i] = S[i + 1];
			i++;
		}
		rD(S);
	}
	rD(S + 1);
}

int main()
{
	char arr[] = "aabccba";
	rD(arr);
	cout << arr << endl;

	return 0;
}


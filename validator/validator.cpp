#include "testlib.h"
#include<iostream>
using namespace std;
const int MAXN = 5000;
const int MAXA = 10000000;
const int MINA = -10000000;
int main()
{
	registerValidation();
	//cout<<"run"<<endl;
	//string secret = inf.readLine();
	//ensuref(secret == (string)"3f130aac-d629-40d9-b3ad-b75ea9aa8052", "Secret not found!");
	int n = inf.readInt(MINA, MAXN, "K");
	inf.readSpace();
	int t = inf.readInt(3*MINA,3*MAXA,"T");
	inf.readEoln();
	for (int i = 0; i < n; i++)
	{
		inf.readInt(MINA, MAXA, "W_i");
		if (i + 1 < n)
			inf.readSpace();
		else
			inf.readEoln();
	}
	inf.readEof();
	return 0;
}

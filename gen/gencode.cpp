#include <iostream>
#include "testlib.h"
using namespace std;
const int MAXN = 5010;
const int MAXA = 100000000;
const int MINA = -100000000;
int h[MAXN];
void print(int n,int k)
{
	cout << n <<" "<< k <<endl;
	for (int i = 0; i < n; i++)
	{
		cout << h[i];
		if (i + 1 < n)
			cout << " ";
		else
			cout << endl;
	}
}
int main(int argc, char *argv[])
{
	registerGen(argc, argv);
	string type(argv[1]);
	if (type == "random")
	{
		int k = atoi(argv[2]);
		for (int i = 0; i < k; i++)
			h[i] = rnd.next(MINA, MAXA);
		long long t = rnd.next(3*MINA,3*MAXA);
		print(k,t);
	}
	if(type == "all_one"){
		int k = atoi(argv[2]);
		for(int i=0;i<k;i++){
			h[i] = 1;
		}
		int t = 3;
		print(k,t);
	}
	return 0;
}

#include "testlib.h"
using namespace std;



int main(int argc, char * argv[])
{
	//registerTestlibCmd(argc,argv);
	registerChecker("Andy Inventure", argc, argv);
	string ans_s = ans.readString();
	string output_s = ouf.readString();
	if(ans_s!=output_s){
		quitf(_wa,"%s and %s are different",ans_s,output_s);
	}
	else{
		quitf(_ok,"AC");
	}
}

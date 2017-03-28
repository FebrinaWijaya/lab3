#include<fstream>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int n;
	ifstream inFile("file.in",ios::in);
	inFile>>n;
	vector<int> weight(n);
	for(int a=0;a<n;++a)
		inFile>>weight.at(a);
	sort(weight.begin(),weight.end());
	int top5=0;
	for(int a=n-1;a>=n-5;--a)
	{
		top5+=(int)weight.at(a);
	}
	ofstream outFile("file.out",ios::out);
	outFile<<top5;
	inFile.close();
	outFile.close();
	return 0;
}

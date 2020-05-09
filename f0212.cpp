// 用筛法判断素数

#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main(){
	vector<int> prime(10000,1);
	for(int i=2;i<100;++i)	// 构造素数集合
		if(prime[i])
			for(int j=i;i*j<10000;++j)
				prime[i*j]=0;
	ifstream in("a.txt");
	for(int a;in>>a && a>1 && a<10000;)	// 判断素数
		cout<<a<<" is"<<(prime[a] ? "":"not ")<<" a prime.\n";
	return 0;
}

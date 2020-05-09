#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	int k=7/2;
	for(int i=-k;i<=k;i++){
		for(int j=-k;j<=k;j++)
			printf(abs(i)+abs(j)<=k ? "*" : " ");
		printf("\n");
	}
	return 0;
}

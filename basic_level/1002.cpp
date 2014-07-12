//
//
#include "iostream"
#include <string>
using namespace std;

int mypow(int i,int n){
	int temp=1;
	while(n--){
		temp*=i;
	}
	return temp;
}

int main(int argc, char const *argv[])
{
	char *a[] ={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};
	string n;

	cin>>n;
	int sum=0;
	for(int i=0;i<n.length();i++){
		sum+=n[i]-'0';
	}
	int temp = sum;
	int weishu=-1;
	while(temp){
		weishu++;
		temp/=10;
	}
	if(!sum){
		cout<<*a;
		return 0;
	}
	while(sum){
		int lst=sum/mypow(10,weishu);
		sum-=lst*mypow(10,weishu);
		if(weishu<=0)
			cout<<*(a+lst);
		else
			cout<<*(a+lst)<<" ";
		weishu--;

	}

	return 0;
}
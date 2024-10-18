#include<iostream>
#include<string>
using namespace std;
const int N = 100010;
//使用引用参数返回两个int
int Add(int a[],int b[],int c[],int len)
{
	int t=0;
	for(int i=1;i<=len;i++)
	{
		t += a[i]+b[i];
		c[i] = t%10;
		t/=10;
	}
	if(t!=0) c[++len]=t;
	return len;
}
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    
	int a[N],b[N],c[N];
	int cnt1 = 0;
	for(int i=str1.size()-1;i>=0;i--)
		a[++cnt1]=str1[i]-'0';
	int cnt2=0;
	for(int i=str2.size()-1;i>=0;i--)
		b[++cnt2]=str2[i]-'0';
	
	int cnt = Add(a,b,c,max(cnt1,cnt2));
	for(int i=cnt;i>=1;i--)
	{
		cout<<c[i];
	}
	cout<<endl;
    return 0;
}

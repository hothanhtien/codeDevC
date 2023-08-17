#include <bits/stdc++.h>
using namespace std;
struct sinhvien
{
	string name;
	string sex;
	int age;
	string sub;
	int poin;
	int credits;
};
main()
{
	int n,m,t;
	cin>>n>>m>>t;
	sinhvien a[n];	
	int ssub=0;
	int sname=0;

	for(int i=0; i<n; i++)
	{
		
		cin>>a[i].name;
		for(int j=0; j<m; j++)
		{
			cin>>a[j].sub;
				int s=0;
					int s1;	
				for(int k=0; k<t; k++)
				{
					cin>>a[k].poin;
//					cout<<a[k].poin<<endl;
					s=s+a[k].poin;
//					cout<<s;
					if (k==t-1) 
					{
						s1=s/t;
//						cout<<s1;
					}
				}
				cout<<s1<<endl; // doan nay in khong duoc s1 anh
				ssub=ssub+s1; 
//				cout<<ssub1;
		}
		sname=sname+ssub;
	cout<<"DIEM TRUNG BINH CUA SINH VIEN "<<a[i].name<<": "<<sname/m<<endl;
	}
}

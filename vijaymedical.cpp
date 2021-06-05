#include<iostream>
#include<string>
#include<string.h>
#include<fstream>
using namespace std;
int n;
class med
{
	public:
		char name[20];
		char exp[20];
		char mfg[20];
		float cost;
		public:
			void data()
			{
				cout<<"enter the medicine name to add";
			cin>>name;
				fstream k;
				k.open("vijay1.txt",ios::app);
				k<<"Medicine:"<<name;
				cout<<"enter the expiry date:";
				gets(exp);
					k<<"\nexpiry date:"<<exp;
					fflush(stdin);
				cout<<"enter the manufacturing date:";
				gets(mfg);
					k<<"\nmanufacturing date:"<<mfg;
					cout<<"enter the cost:";
				cin>>cost;
					k<<"\ncost:"<<cost<<endl;
					k.close();
			}
			void insert()
			{
				fstream l("med.txt",ios::app);
				l<<name<<endl;
				l.close();
			}
			void display()
			{
				string ch;
				fstream k("vijay1.txt",ios::in);
				while(!k.eof())
				{
				k>>ch;
			cout<<ch;
		}
		k.close();
			}
			void search1()
			{
				char hj[100],kp[100];
				cout<<"enter the medicine to search";
				cin>>kp;
				fstream j("med.txt",ios::in);
					while(!j.eof())
				{
				j>>hj;
		if(strcmp(hj,kp)==0)
		{
			cout<<"search successful";
			break;
		}
		}
			}
};
main()
{
	med ob[100];
	int i;
cout<<"enter 1 for add medicine with detail int o stock\n2 for display record of current record\n3to search the mediciine";
cin>>i;
switch(i)
{
	case 1:
		{
			cout<<"enter the no. of medicines you want to add;";
			cin>>n;
			for(i=0;i<n;i++)
			{
			ob[i].data();
			ob[i].insert();
		}
			break;
		}
		case 2:
			{
				ob[i].display();
		break;
			}
			case 3:
				{
			cout<<"enter the no. of medicines you want to search;";
			cin>>n;
			for(i=0;i<n;i++)
			{
			ob[i].search1();
			
		}
		}
		default:
			cout<<"wrong choice";
			break;
}
}

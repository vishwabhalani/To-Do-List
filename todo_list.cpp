#include<iostream>
using namespace std;
class lists
{
	public:
	int i,no=0;
	string Tasks[100];
	void set()
	{
		cout<<"Enter Number Of Tasks You Wanted To Add\n";
		cin>>no;
		cin.ignore();
		cout<<"Enter Tasks\n";
		for(i=0;i<no;i++)
		{
			cout<<i+1<<".";
			getline(cin,Tasks[i]);
		}
	}
	void get()
	{
		cout<<"--Tasks:--\n";
		for(i=0;i<no;i++)
		{
			cout<<i+1<<"."<<Tasks[i]<<endl;
		}
		cout<<endl;
	}
	void remove()
	{
		int task_no;
		cout<<"Enter Number Of Your Task You Wanted To Remove\n";
		cin>>task_no;
		if(task_no>=1 && task_no<=no)
		{
			for(int i=task_no-1;i<no-1;i++)
			{
				Tasks[i]=Tasks[i+1];
			}
			no--;
			cout<<"Your Task"<<task_no<<" Removed Successfully\n";
		}
		else
		{
			cout<<"Invali Task Number Please Enter Valid Task\n";
		}
	}
};
int main()
{
	lists l1;
	int x=1,i,ch;
	do
	{
		cout<<"-----------------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"                                                      ....To-Do-List Menu....       \n";
		cout<<"-----------------------------------------------------------------------------------------------------------------------------------\n";
		cout<<"1.Add Tasks\n";
		cout<<"2.Remove Tasks From List\n";
		cout<<"3.Display Tasks\n";
		cout<<"4.Exit\n";
		cout<<"Enter Your Choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				l1.set();
			l1.get();
			break;
			case 2:
				l1.remove();
				break;
			case 3:
				l1.get();
			break;
			case 4:
				cout<<"Bye\n";
				x=0;
			break;
			default:
				cout<<"Please Enter Proper Choice\n";
			break;
		}
	}while(x!=0);
}

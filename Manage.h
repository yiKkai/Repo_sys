#pragma once //ʹͷ�ļ�ֻ����һ��,��ֹͷ�ļ��ظ����� 
#include <iostream>
#include<fstream>//���������ļ�
#include<iomanip>//����setiosflags()����
#include"Goods.h"
using namespace std;

class Manage {
		int manage;
	public:
		Manage();//���캯��
		~Manage() ;//�������� 
		void Show_Menu1();//չʾ���˵�
		void Show_Menu2();//չʾ������˵�
		void InPut();//������
		void Show_Menu3();//չʾ��Ʒ����˵�
		void Commodit();//��Ʒ����
		void Show_Menu4();//չʾ�������˵�
		void OutPut();//�������
		void SellGoods();//��Ʒ����	
		void Show_Menu5();//չʾ��Ʒ��ѯ�˵�
		void Search();//��Ʒ��ѯ	
		void exitSystem();//�˳�����ϵͳ
		void AddGoods();//��Ʒ��Ϣ���
		void DeleteGoods();//��Ʒ��Ϣɾ��
		void EditGoods();//��Ʒ��Ϣ�༭
		void SaveGoods();//��Ʒ��Ϣ����
		void DisplayGoods();//���������Ʒ��Ϣ
		void SearchByName();//������Ʒ����������Ʒ��Ϣ
		void SearchByID();//������Ʒ���������Ʒ��Ϣ
		void SearchByBrand();//�����������Ҳ�����Ʒ��Ϣ
		void DisplayInput();//����¼
		void DisplayOutput();//�����¼
		 
  	private:
	int amount;//��Ʒ��
	int DeleteAmount;
	Goods *head;
	Goods *DeleteHead;  		
	
};
Manage::Manage()
{
	amount=0;
	DeleteAmount=0;
	head=new Goods;
	head->next=NULL;
	DeleteHead=new Goods;
	DeleteHead->next=NULL;	
} 
void Manage::Show_Menu1()//չʾ���˵�
{
	cout<<"��������������������"<<endl;
	cout<<"��ӭʹ�ÿ�����ϵͳ��"<<endl;
	cout<<"0.�˳�ϵͳ"<<endl;
	cout<<"1.������"<<endl;
	cout<<"2.�������"<<endl;
	cout<<"3.��Ʒ����"<<endl;
	cout<<"4.��Ʒ��ѯ"<<endl;
	cout<<"5.������Ϣ"<<endl;
	cout<<"��������������������"<<endl;
	cout<<endl;
} 

void  Manage::Show_Menu2()//չʾ������˵�
{
	cout<<"����������������"<<endl;
	cout<<"0.������һ���˵�"<<endl;
	cout<<"1.��Ӳ�Ʒ"<<endl;
	cout<<"2.����¼"<<endl;
	cout<<"��������������������"<<endl;
	cout<<endl;	
}

void Manage::Show_Menu3()//չʾ��Ʒ����˵�
{
	cout<<"��������Ʒ��������"<<endl;
	cout<<"0.������һ���˵�"<<endl;
	cout<<"1.ɾ����Ʒ"<<endl;
	cout<<"2.�༭��Ʒ"<<endl;
	cout<<"3.�����Ʒ"<<endl;
	cout<<"��������������������"<<endl;
	cout<<endl;
}

void Manage::Show_Menu4()//չʾ�������˵�
{
	cout<<"�����������������"<<endl;
		cout<<"0.������һ���˵�"<<endl;
		cout<<"1.��Ʒ����"<<endl;
		cout<<"2.�����¼"<<endl;
		cout<<"��������������������"<<endl;
		cout<<endl;
}

void Manage::Show_Menu5()//չʾ��Ʒ��ѯ�˵�
{
	cout<<"��������Ʒ��ѯ������"<<endl;
		cout<<"0.������һ���˵�"<<endl;
		cout<<"1.��Ų�ѯ"<<endl;
		cout<<"2.���Ʋ�ѯ"<<endl;
		cout<<"3.���Ҳ�ѯ"<<endl;
		cout<<"��������������������"<<endl;
		cout<<endl;
}

void Manage::Search()//��Ʒ����
{
	int c=1;
	int choice; 		
	while(c==1){
		Show_Menu5();
		cout<<"����������ѡ��"<<endl;
		cin>>choice;//�û�����ѡ��
		system("cls");//���ˢ��
		switch(choice)//�û�ѡ�����ִ�е����
		{
		case 0://������һ���˵�	
		c=2;
		break;
		case 1:
		SearchByID();//��Ų�ѯ
		break;
		case 2:
		SearchByName();//���Ʋ�ѯ
		break;
		case 3:
		SearchByBrand();//���Ҳ�ѯ	
		break;	
		default:
		system("cls");//���ˢ��
		break;		
		}
		system("pause");
	}	
}

void Manage::InPut()//������
{
	int c=1;
	int choice; 		
	while(c==1){
		Show_Menu2();
		cout<<"����������ѡ��"<<endl;
		cin>>choice;//�û�����ѡ��
		system("cls");//���ˢ��
		switch(choice)//�û�ѡ�����ִ�е����
		{
		case 0://������һ���˵�	
		c=2;
		break;
		case 1://��Ӳ�Ʒ
		AddGoods();
		break;
		case 2://����¼
		DisplayInput();
		break;
		default:
		system("cls");//���ˢ��
		break;		
		}
		system("pause");
	}
} 

void Manage::Commodit()//��Ʒ����	
{
	int c=1;
	int choice; 		
	while(c==1){
		Show_Menu3();	
		cin>>choice;//�û�����ѡ��
		system("cls");//���ˢ��
		switch(choice)//�û�ѡ�����ִ�е����
		{
			case 0://������һ���˵�	
			c=2;
			break;
			case 1://ɾ����Ʒ
			DeleteGoods();
			break;
			case 2://�༭��Ʒ
			exitSystem();
			break;
			case 3://��Ʒ���
			DisplayGoods();
			break;	
			default:
			system("cls");//���ˢ��
			break;		
			}
			system("pause");
	}
}

void Manage::OutPut()//��Ʒ����
{
	int c=1;
	int choice; 		
	while(c==1){
		Show_Menu4();	
		cin>>choice;//�û�����ѡ��
		system("cls");//���ˢ��
		switch(choice)//�û�ѡ�����ִ�е����
		{
			case 0://������һ���˵�	
			c=2;
			break;
			case 1://��Ʒ����
			SellGoods();
			break;
			case 2://�����¼
			DisplayOutput();
			break;	
			default:
			system("cls");//���ˢ��
			break;		
			}
			system("pause");
	}	
}

void Manage::exitSystem()//�˳�����ϵͳ
{
	cout<<"��ӭ�´�ʹ��"<<endl;
	system("pause");
	exit(0);//�˳�
}

void Manage::AddGoods()//���������Ʒ��Ϣ����
{
	char c,c1;
	Goods *tail=head,*p;
	bool flag;
	cout<<"������������ ���ڽ�����Ʒ��Ϣ����� ������������"<<endl;
	while(tail->next!=NULL)
		tail=tail->next;//��tailָ�����������һ���ڵ�
	do
	{
		flag=0;
		p=new Goods;		
		cout<<"��ѡ����Ʒ���:"<<endl;
		cout<<"1.ʳƷ 2.��ױƷ 3.����Ʒ 4.����"<<endl;
		cout<<"������������������������������������������������"<<endl;
		cout<<endl;
		cout<<"��������Ӧ��ţ�";
		p->i_num++;//���������1
		do
		{
			cin>>c1;
			if(c1>='1'&&c1<='4')//�ж��û��������Ƿ����
				flag=1;
			else
			{
				cout<<"������ı�Ų����ڣ���ѡ����ȷ����Ʒ���"<<endl;
			    cout<<endl;
			}
		}while(flag==0);//�����Ŵ���ʱ����ѭ��
		if(c1=='1'){
			p->g_Type=Food;
			cout<<"��Ʒ���"<<"ʳƷ"<<endl;
		}
		if(c1=='2'){
			p->g_Type=Cosmetic;
			cout<<"��Ʒ���"<<"��ױƷ"<<endl;
		}	
		if(c1=='3'){
			p->g_Type=Commodity;
			cout<<"��Ʒ���"<<"����Ʒ"<<endl;
		}
		if(c1=='4'){
			p->g_Type=Drink;
			cout<<"��Ʒ���"<<"����"<<endl;
		}
		cout<<endl;
		cout<<"��������Ʒ���: "<<endl;
        cin>>p->g_ID;
		do
		{
			Goods *q=head->next;
			while(q!=NULL&&q->g_ID!=p->g_ID)//��qָ��NULL������ı����֮ǰ����ظ�ʱ����ѭ��
				q=q->next;
			if(q==NULL)//��pָ��NNULL�ұ�Ų��ظ�ʱ
				flag=1;
			else//����ظ�ʱ
			{
				cout<<"���ڸñ�ŵĻ���!!!�����������ţ�";
			    cin>>p->g_ID;
			}
		}while(flag==0);
		cout<<"�������Ʒ���ƣ�"<<endl;
		cin>>p->g_Name;
		cout<<"�������Ʒ���أ�"<<endl;
		cin>>p->g_Origin;		
		cout<<"�������Ʒ������"<<endl;
		cin>>p->g_Num;		
		cout<<"�������Ʒ���ۣ�"<<endl;
		cin>>p->g_InPrice;		
        cout<<"���������ʱ�䣨��/��/�գ���"<<endl;
		cout<<"�꣺";
		cin>>p->g_Datein.year;
		cout<<"�£�";
		cin>>p->g_Datein.month;
		cout<<"�գ�";
		cin>>p->g_Datein.day;	
		cout<<"�������������ң�"<<endl; 
		cin>>p->g_Brand;
		tail->next=p;//��p��������
		p->next=NULL;
		tail=p;
		amount++;//��Ʒ����һ
		cout<<"��������ɹ�����������������(y/n):";
		cin>>c;
		while(c!='y'&&c!='n')
		{
			cout<<"ָ����󣡣�������<������y/n>"<<endl;
		    cout<<"������ӳɹ������������������(y/n):";
			cin>>c;
		}
	}while(c=='y');
	cout<<endl;
	cout<<"������Ϣ������ϡ���"<<endl;
	cout<<"������������������˵�����"<<endl;
	getchar();
	system("cls");//���ˢ��
}

void Manage::DeleteGoods()//������Ʒ��Ϣɾ������
{
	Goods *q=head,*p,*tail=DeleteHead;
	p=new Goods;
	char c;
	string Dename;
	bool flag=0;
	while(tail->next!=NULL)//��tailָ�����������һ���ڵ�
		tail=tail->next;
	cout<<"�������������������ڽ�����Ʒ��Ϣ��ɾ������������������"<<endl;
	do
	{
		
		cout<<"��������Ҫɾ������Ʒ���ƣ�";
		cin>>Dename;
		while(q->next!=NULL&&q->next->g_Name!=Dename)//ֱ��qָ�����������һ���ڵ�����ҵ���Ӧ���Ƶ���Ʒʱ����ѭ��
			q=q->next;
		if(q->next!=NULL)//�ҵ���Ӧ���Ƶ���Ʒ
		{
			flag=1;
			cout<<"ȷ��ɾ����<y/n>";
			cin>>c;
			while(c!='y'&&c!='n')
			{
				cout<<"ָ����󣡣�����<������y/n>:";
				cin>>c;
			}
			if(c=='y')
			{  
				p=q->next;
				q->next=q->next->next;//q����һ���ڵ�ָ�����Ľڵ�
				tail->next=p;
				tail=p;
				tail->next=NULL;//��������ɾ��ָ���ڵ�
				DeleteAmount++;
				amount--;//��Ʒ����һ
				cout<<"ɾ���ɹ�����"<<endl;
			}
			else cout<<"ȡ���ɹ�������"<<endl;

		}
		if(flag==0)
		{
			cout<<"�Բ�����ɾ������Ʒ�����ڣ�����"<<endl;

		}
		cout<<"����Ҫ����ɾ����(y/n):";
		cin>>c;
		while(c!='y'&&c!='n')
		{
			cout<<"ָ����󣡣���<������y/n>:"<<endl;
			cout<<"����Ҫ����ɾ����(y/n):";
			cin>>c;
		}
		flag=0;
		q=head;//��qָ�������е�һ������ٴ�������Ӧ���Ƶ���Ʒ

	}while(c=='y');
	cout<<endl;
	cout<<"������Ϣɾ����ϡ���"<<endl;
	cout<<"������������������˵�����"<<endl;
	getchar();
	system("cls");//���ˢ��
}

void Manage::EditGoods()//����༭��Ʒ��Ϣ����
{
	char c;
	Goods *p;
	bool flag=0;
	int  EditID;

	cout<<" �������������������ڽ�����Ʒ��Ϣ�ı༭����������������"<<endl;
	do
	{
		p=head->next;//��pָ��head��һ���ڵ�
		flag=0;
		cout<<"��������Ҫ�޸ĵĻ����ţ�";
		cin>>EditID;
		while(p->next!=NULL&&p->g_ID!=EditID){//ֱ��pָ�����������һ���ڵ��ҵ���Ӧ��ŵ���Ʒʱ����ѭ��
			p=p->next;
		}	
		if(p->g_ID==EditID)
		{
			flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
	        "��Ʒ���"<<setw(20)<<"��������"<<setw(20)<<"���ʱ��"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
			cout<<"ȷ���޸���<y/n>";
			cin>>c;
		while(c!='y'&&c!='n'){
			cout<<"ָ����󣡣�����<������y/n>:";
			cin>>c;
		}
		if(c=='y'){
			cout<<"�������Ʒ���ƣ�"<<endl;
			cin>>p->g_Name;
			cout<<"�������Ʒ���أ�"<<endl;
			cin>>p->g_Origin;		
			cout<<"�������Ʒ������"<<endl;
			cin>>p->g_Num;		
			cout<<"�������Ʒ���ۣ�"<<endl;
			cin>>p->g_InPrice;		
	        cout<<"���������ʱ�䣨��/��/�գ���"<<endl;
			cout<<"�꣺";
			cin>>p->g_Datein.year;
			cout<<"�£�";
			cin>>p->g_Datein.month;
			cout<<"�գ�";
			cin>>p->g_Datein.day;	
			cout<<"�������������ң�"<<endl; 
			cin>>p->g_Brand;
			cout<<"�޸ĳɹ���"<<endl;	
		}
		}
		else{
			 cout<<"ȡ���ɹ���"<<endl;
		}
		if(flag==0)	{
			cout<<"�Բ������޸ĵĻ��ﲻ���ڣ���"<<endl;
		}
			cout<<"����Ҫ�����޸���(y/n):";
			cin>>c;
		while(c!='y'&&c!='n'){
			cout<<"ָ����󣡣���<������y/n>:"<<endl;
			cout<<"����Ҫ�����޸���(y/n):";
			cin>>c;
		}
		}while(c=='y');
		cout<<endl;
	    cout<<"������Ϣ�༭��ϡ���"<<endl;
	    cout<<"������������������˵�����"<<endl;
		getchar();
		system("cls");//���ˢ��
	}
	
	void Manage::SaveGoods()//������Ʒ��Ϣ���溯��
{
		 Goods *p=head;
		 cout<<"�������������������ڽ�����Ʒ��Ϣ�ı��桪��������������"<<endl;
		 ofstream output("������Ϣ.txt",ios::out);//��������ļ�"������Ϣ.txt"
		 if(!output)
		 {
			 cerr<<"���ļ�<������Ϣ.txt>ʧ�ܣ�����"<<endl;
		 }
		cout<<setiosflags(ios::left)<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
			"��Ʒ���"<<setw(10)<<"��������"<<setw(20)<<"���ʱ��"<<endl;
		 output<<"��Ʒ����Ϊ: "<<amount<<"\n";
	     output<<setiosflags(ios::left)<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
		 	"��Ʒ���"<<setw(10)<<"��������"<<setw(20)<<"���ʱ��"<<endl;
		 while(p->next!=NULL)
		 {  
			 p=p->next;
			 cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
		     cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
		     cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Dateout.month<<"/"<<p->g_Datein.day<<endl;
			 output<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;//���ļ�����ʾ��Ӧ��Ʒ��Ϣ
			 output<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
			 output<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
		 }
		 cout<<endl;
		 cout<<"�ɹ���������Ϣ���浽<������Ϣ.txt>"<<endl;
		 cout<<"������Ϣ������ϡ���"<<endl;
		 cout<<"������������������˵�����"<<endl;
		 getchar();
		 output.close();//�ر�����ļ�
		 system("cls");//���ˢ��
	}
	
void Manage::DisplayGoods()//�����Ʒ��Ϣ
{
	Goods *p;
	p=head;
		cout<<"���������������ڽ�����Ʒ��Ϣ����������������� "<<endl;
		cout<<setiosflags(ios::left)<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
		"��Ʒ���"<<setw(20)<<"��������"<<setw(20)<<"���ʱ��"<<endl;
		while(p->next!=NULL)//ֱ��pָ�����������һ�����
		{
			p=p->next;
			cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
			cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
			cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
		}
		cout<<endl;
	    cout<<"������Ϣ�����ϡ���"<<endl;
		cout<<"������������������˵�����"<<endl;
		getchar();
		system("cls");//���ˢ��	
	}
	
void Manage::SellGoods()//��Ʒ����
{
   		Goods *p;
   		char c;
		bool flag=0;
		double sum;
		int SellNum;
		string SellName;
		cout<<"���������������ڽ�����Ʒ�ĳ��⡪����������"<<endl;
		do
		{
			p=head->next;
			flag=0;
			cout<<"��������Ҫ�������Ʒ���ƣ�";
			cin>>SellName;
			while(p->next!=NULL&&p->g_Name!=SellName)
				p=p->next;
			if(p->g_Name==SellName)
			{
				flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
	        "��Ʒ���"<<setw(20)<<"��������"<<setw(20)<<"���ʱ��"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
				cout<<"ȷ�ϳ�����<y/n>";
				cin>>c;
				while(c!='y'&&c!='n')
				{
					cout<<"ָ����󣡣�����<������y/n>:";
					cin>>c;
				}
				if(c=='y')
				{
					
		            cout<<"������������Ʒ������";
		            cin>>SellNum;
					if(SellNum<=p->g_Num)//���������
					{
						p->o_num++;//���������1
						p->g_Num=p->g_Num-SellNum;//������Ʒ�������Ʒ�Ŀ����
						cout<<"������������Ʒ�۸�";
						cin>>p->g_OutPrice;
						cout<<"���������ʱ�䣨��/��/�գ���"<<endl;
						cout<<"�꣺";
						cin>>p->g_Dateout.year;
						cout<<"�£�";
						cin>>p->g_Dateout.month;
						cout<<"�գ�";
						cin>>p->g_Dateout.day;
						sum=SellNum*p->g_OutPrice;//�������۽��
						p->g_profit=SellNum*(p->g_OutPrice-p->g_InPrice);//��������
						cout<<"�˴����۶�Ϊ�� "<<sum<<endl;
						cout<<"�˴�����Ϊ�� "<<p->g_profit<<endl;
						cout<<"��������Ϊ��"<<p->g_Dateout.year<<"/"<<p->g_Dateout.month<<"/"<<p->g_Dateout.day<<endl;
					}
					else
					{
						cout<<"��治�㣡����ʧ�ܣ�"<<endl;
					}	
				}
				else cout<<"ȡ���ɹ���"<<endl;
			}
			if(flag==0)
			{
				cout<<"�Բ���������Ļ��ﲻ���ڣ���"<<endl;

			}
			cout<<"����Ҫ����������(y/n):";
			cin>>c;
			while(c!='y'&&c!='n')
			{
				cout<<"ָ����󣡣���<������y/n>:"<<endl;
				cout<<"����Ҫ����������(y/n):";
				cin>>c;
			}
		}while(c=='y');
		cout<<endl;
	    cout<<"����������ϡ���"<<endl;
	    cout<<"������������������˵�����"<<endl;
		getchar();
		system("cls");//���ˢ��		
	}
	
void Manage::SearchByID()//������Ʒ��Ų�����Ʒ��Ϣ
{	
		Goods *p;
		bool flag;
		int FoundID;
		cout<<"���������������ڽ�����Ʒ��Ϣ�Ĳ��ҡ�����������"<<endl;
		p=head;
		flag=0;
		cout<<"��������Ҫ���ҵ���Ʒ��ţ�";
		cin>>FoundID;
		   while(p->next!=NULL)
			{
			
				p=p->next;
				if(p->g_ID==FoundID)//�ҵ���Ӧ��ŵ���Ʒ
				{
				 flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
	        "��Ʒ���"<<setw(20)<<"��������"<<setw(20)<<"���ʱ��"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
				 break;
				}
			}
		   if(flag==0)
			{
				cout<<"�Բ�������ѯ����Ʒ�����ڣ�����"<<endl;				
			}
			cout<<endl;
			cout<<"������Ϣ������ϡ���"<<endl;
		    cout<<"������������������˵�����"<<endl;
			getchar();
	}
	
void Manage::SearchByName()//������Ʒ���Ʋ�����Ʒ��Ϣ
{	
	Goods *p;
	bool flag;
	string FoundName;
	cout<<"���������������ڽ�����Ʒ��Ϣ�Ĳ��ҡ�����������"<<endl;
		p=head;
		flag=0;
		cout<<"��������Ҫ���ҵ���Ʒ���ƣ�";
		cin>>FoundName;
		while(p->next!=NULL)
		{
		
				p=p->next;
				if(p->g_Name==FoundName)//�ҵ���Ӧ���Ƶ���Ʒ
				{
				 flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
	        "��Ʒ���"<<setw(20)<<"��������"<<setw(20)<<"���ʱ��"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
				 break;
				}
		}
		if(flag==0)
		{
			cout<<"�Բ�������ѯ����Ʒ�����ڣ�����"<<endl;		
		}
		cout<<endl;
		cout<<"������Ϣ������ϡ���"<<endl;
	    cout<<"������������������˵�����"<<endl;
		getchar();
}

void Manage::SearchByBrand()//�����������Ҳ�����Ʒ��Ϣ
{
	
	Goods *p;
	bool flag;
	string FoundBrand;
	cout<<"���������������ڽ�����Ʒ��Ϣ�Ĳ��ҡ�����������"<<endl;
		p=head;
		flag=0;
		cout<<"��������Ҫ���ҵ���Ʒ���ң�";
		cin>>FoundBrand;
		while(p->next!=NULL)
		{
		
				p=p->next;
				if(p->g_Brand==FoundBrand)//�ҵ���Ӧ������������Ӧ����Ʒ
				{
				 flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
	        "��Ʒ���"<<setw(20)<<"��������"<<setw(20)<<"���ʱ��"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
				}	
		}
		if(flag==0)
		{
			cout<<"�Բ�������ѯ����Ʒ�����ڣ�����"<<endl;			
		}
		cout<<endl;
		cout<<"������Ϣ������ϡ���"<<endl;
	    cout<<"������������������˵�����"<<endl;
		getchar();
}

void Manage::DisplayInput()//����¼
{
	Goods *p;
	p=head;
		cout<<"���������������ڲ鿴��Ʒ������¼������������ "<<endl;
		cout<<setiosflags(ios::left)<<setw(10)<<"������"<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
		"��Ʒ���"<<setw(20)<<"��������"<<setw(20)<<"���ʱ��"<<endl;
		while(p->next!=NULL)//ֱ��pָ�����������һ�����
		{
			p=p->next;
			cout<<setiosflags(ios::left)<<setw(10)<<p->i_num<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
			cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
			cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
		}
		cout<<endl;
	    cout<<"��������¼�鿴��ϡ���"<<endl;
		cout<<"������������������˵�����"<<endl;
		getchar();
		system("cls");//���ˢ��	
}	

void Manage::DisplayOutput()//�����¼
{
	Goods *p;
	p=head;
		cout<<"���������������ڲ鿴��Ʒ�ĳ����¼������������ "<<endl;
		cout<<setiosflags(ios::left)<<setw(10)<<"��Ʒ���"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<"��Ʒ����"<<setw(10)<<
		"��Ʒ���"<<setw(20)<<"��������"<<setw(20)<<"����ʱ��"<<endl;
		while(p->next!=NULL)//ֱ��pָ�����������һ�����
		{
			p=p->next;
			cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
			cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
			cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Dateout.year<<"/"<<p->g_Dateout.month<<"/"<<p->g_Dateout.day<<endl;
		}
		cout<<endl;
	    cout<<"��������¼�鿴��ϡ���"<<endl;
		cout<<"������������������˵�����"<<endl;
		getchar();
		system("cls");//���ˢ��	
}	
Manage::~Manage()
{
	
}

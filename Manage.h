#pragma once //使头文件只编译一次,防止头文件重复包含 
#include <iostream>
#include<fstream>//用来保存文件
#include<iomanip>//调用setiosflags()函数
#include"Goods.h"
using namespace std;

class Manage {
		int manage;
	public:
		Manage();//构造函数
		~Manage() ;//析构函数 
		void Show_Menu1();//展示主菜单
		void Show_Menu2();//展示入库管理菜单
		void InPut();//入库管理
		void Show_Menu3();//展示商品管理菜单
		void Commodit();//商品管理
		void Show_Menu4();//展示出库管理菜单
		void OutPut();//出库管理
		void SellGoods();//商品出货	
		void Show_Menu5();//展示商品查询菜单
		void Search();//商品查询	
		void exitSystem();//退出管理系统
		void AddGoods();//产品信息添加
		void DeleteGoods();//产品信息删除
		void EditGoods();//产品信息编辑
		void SaveGoods();//商品信息保存
		void DisplayGoods();//浏览所有商品信息
		void SearchByName();//按照商品名称搜索商品信息
		void SearchByID();//按照商品编号搜索商品信息
		void SearchByBrand();//按照生产厂家查找商品信息
		void DisplayInput();//入库记录
		void DisplayOutput();//出库记录
		 
  	private:
	int amount;//商品量
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
void Manage::Show_Menu1()//展示主菜单
{
	cout<<"——————————"<<endl;
	cout<<"欢迎使用库存管理系统！"<<endl;
	cout<<"0.退出系统"<<endl;
	cout<<"1.入库管理"<<endl;
	cout<<"2.出库管理"<<endl;
	cout<<"3.商品管理"<<endl;
	cout<<"4.商品查询"<<endl;
	cout<<"5.保存信息"<<endl;
	cout<<"——————————"<<endl;
	cout<<endl;
} 

void  Manage::Show_Menu2()//展示入库管理菜单
{
	cout<<"———入库管理———"<<endl;
	cout<<"0.返回上一个菜单"<<endl;
	cout<<"1.添加产品"<<endl;
	cout<<"2.入库记录"<<endl;
	cout<<"——————————"<<endl;
	cout<<endl;	
}

void Manage::Show_Menu3()//展示商品管理菜单
{
	cout<<"———商品管理———"<<endl;
	cout<<"0.返回上一个菜单"<<endl;
	cout<<"1.删除商品"<<endl;
	cout<<"2.编辑商品"<<endl;
	cout<<"3.浏览商品"<<endl;
	cout<<"——————————"<<endl;
	cout<<endl;
}

void Manage::Show_Menu4()//展示出库管理菜单
{
	cout<<"———出库管理———"<<endl;
		cout<<"0.返回上一个菜单"<<endl;
		cout<<"1.商品出货"<<endl;
		cout<<"2.出库记录"<<endl;
		cout<<"——————————"<<endl;
		cout<<endl;
}

void Manage::Show_Menu5()//展示商品查询菜单
{
	cout<<"———商品查询———"<<endl;
		cout<<"0.返回上一个菜单"<<endl;
		cout<<"1.编号查询"<<endl;
		cout<<"2.名称查询"<<endl;
		cout<<"3.厂家查询"<<endl;
		cout<<"——————————"<<endl;
		cout<<endl;
}

void Manage::Search()//商品查找
{
	int c=1;
	int choice; 		
	while(c==1){
		Show_Menu5();
		cout<<"请输入您的选择："<<endl;
		cin>>choice;//用户输入选择
		system("cls");//清空刷新
		switch(choice)//用户选择完后执行的语句
		{
		case 0://返回上一个菜单	
		c=2;
		break;
		case 1:
		SearchByID();//编号查询
		break;
		case 2:
		SearchByName();//名称查询
		break;
		case 3:
		SearchByBrand();//厂家查询	
		break;	
		default:
		system("cls");//清空刷新
		break;		
		}
		system("pause");
	}	
}

void Manage::InPut()//入库管理
{
	int c=1;
	int choice; 		
	while(c==1){
		Show_Menu2();
		cout<<"请输入您的选择："<<endl;
		cin>>choice;//用户输入选择
		system("cls");//清空刷新
		switch(choice)//用户选择完后执行的语句
		{
		case 0://返回上一个菜单	
		c=2;
		break;
		case 1://添加产品
		AddGoods();
		break;
		case 2://入库记录
		DisplayInput();
		break;
		default:
		system("cls");//清空刷新
		break;		
		}
		system("pause");
	}
} 

void Manage::Commodit()//商品管理	
{
	int c=1;
	int choice; 		
	while(c==1){
		Show_Menu3();	
		cin>>choice;//用户输入选择
		system("cls");//清空刷新
		switch(choice)//用户选择完后执行的语句
		{
			case 0://返回上一个菜单	
			c=2;
			break;
			case 1://删除商品
			DeleteGoods();
			break;
			case 2://编辑商品
			exitSystem();
			break;
			case 3://商品浏览
			DisplayGoods();
			break;	
			default:
			system("cls");//清空刷新
			break;		
			}
			system("pause");
	}
}

void Manage::OutPut()//商品出库
{
	int c=1;
	int choice; 		
	while(c==1){
		Show_Menu4();	
		cin>>choice;//用户输入选择
		system("cls");//清空刷新
		switch(choice)//用户选择完后执行的语句
		{
			case 0://返回上一个菜单	
			c=2;
			break;
			case 1://商品出库
			SellGoods();
			break;
			case 2://出库记录
			DisplayOutput();
			break;	
			default:
			system("cls");//清空刷新
			break;		
			}
			system("pause");
	}	
}

void Manage::exitSystem()//退出管理系统
{
	cout<<"欢迎下次使用"<<endl;
	system("pause");
	exit(0);//退出
}

void Manage::AddGoods()//定义添加商品信息函数
{
	char c,c1;
	Goods *tail=head,*p;
	bool flag;
	cout<<"—————— 现在进行商品信息的添加 ——————"<<endl;
	while(tail->next!=NULL)
		tail=tail->next;//令tail指向链表中最后一个节点
	do
	{
		flag=0;
		p=new Goods;		
		cout<<"请选择商品类别:"<<endl;
		cout<<"1.食品 2.化妆品 3.日用品 4.饮料"<<endl;
		cout<<"————————————————————————"<<endl;
		cout<<endl;
		cout<<"请输入相应编号：";
		p->i_num++;//进库次数加1
		do
		{
			cin>>c1;
			if(c1>='1'&&c1<='4')//判断用户输入编号是否存在
				flag=1;
			else
			{
				cout<<"您输入的编号不存在！请选择正确的商品类别；"<<endl;
			    cout<<endl;
			}
		}while(flag==0);//输入编号存在时跳出循环
		if(c1=='1'){
			p->g_Type=Food;
			cout<<"商品类别："<<"食品"<<endl;
		}
		if(c1=='2'){
			p->g_Type=Cosmetic;
			cout<<"商品类别："<<"化妆品"<<endl;
		}	
		if(c1=='3'){
			p->g_Type=Commodity;
			cout<<"商品类别："<<"日用品"<<endl;
		}
		if(c1=='4'){
			p->g_Type=Drink;
			cout<<"商品类别："<<"饮料"<<endl;
		}
		cout<<endl;
		cout<<"请输入商品编号: "<<endl;
        cin>>p->g_ID;
		do
		{
			Goods *q=head->next;
			while(q!=NULL&&q->g_ID!=p->g_ID)//当q指向NULL或输入的编号与之前编号重复时跳出循环
				q=q->next;
			if(q==NULL)//当p指向NNULL且编号不重复时
				flag=1;
			else//编号重复时
			{
				cout<<"存在该编号的货物!!!请重新输入编号：";
			    cin>>p->g_ID;
			}
		}while(flag==0);
		cout<<"请输入产品名称："<<endl;
		cin>>p->g_Name;
		cout<<"请输入产品产地："<<endl;
		cin>>p->g_Origin;		
		cout<<"请输入产品数量："<<endl;
		cin>>p->g_Num;		
		cout<<"请输入产品进价："<<endl;
		cin>>p->g_InPrice;		
        cout<<"请输入入库时间（年/月/日）："<<endl;
		cout<<"年：";
		cin>>p->g_Datein.year;
		cout<<"月：";
		cin>>p->g_Datein.month;
		cout<<"日：";
		cin>>p->g_Datein.day;	
		cout<<"请输入生产厂家："<<endl; 
		cin>>p->g_Brand;
		tail->next=p;//将p插入链表
		p->next=NULL;
		tail=p;
		amount++;//商品量加一
		cout<<"数据输入成功！！！想继续添加吗(y/n):";
		cin>>c;
		while(c!='y'&&c!='n')
		{
			cout<<"指令错误！！！！！<请输入y/n>"<<endl;
		    cout<<"数据添加成功！！！想继续输入吗(y/n):";
			cin>>c;
		}
	}while(c=='y');
	cout<<endl;
	cout<<"……信息处理完毕……"<<endl;
	cout<<"……按任意键返回主菜单……"<<endl;
	getchar();
	system("cls");//清空刷新
}

void Manage::DeleteGoods()//定义商品信息删除函数
{
	Goods *q=head,*p,*tail=DeleteHead;
	p=new Goods;
	char c;
	string Dename;
	bool flag=0;
	while(tail->next!=NULL)//令tail指向链表中最后一个节点
		tail=tail->next;
	cout<<"————————现在进行商品信息的删除————————"<<endl;
	do
	{
		
		cout<<"请输入您要删除的商品名称：";
		cin>>Dename;
		while(q->next!=NULL&&q->next->g_Name!=Dename)//直到q指向链表中最后一个节点或者找到相应名称的商品时跳出循环
			q=q->next;
		if(q->next!=NULL)//找到相应名称的商品
		{
			flag=1;
			cout<<"确认删除吗？<y/n>";
			cin>>c;
			while(c!='y'&&c!='n')
			{
				cout<<"指令错误！！！！<请输入y/n>:";
				cin>>c;
			}
			if(c=='y')
			{  
				p=q->next;
				q->next=q->next->next;//q的下一个节点指向其后的节点
				tail->next=p;
				tail=p;
				tail->next=NULL;//在链表中删除指定节点
				DeleteAmount++;
				amount--;//商品量减一
				cout<<"删除成功！！"<<endl;
			}
			else cout<<"取消成功！！！"<<endl;

		}
		if(flag==0)
		{
			cout<<"对不起，您删除的商品不存在！！！"<<endl;

		}
		cout<<"您想要继续删除吗？(y/n):";
		cin>>c;
		while(c!='y'&&c!='n')
		{
			cout<<"指令错误！！！<请输入y/n>:"<<endl;
			cout<<"您想要继续删除吗？(y/n):";
			cin>>c;
		}
		flag=0;
		q=head;//令q指向链表中第一个结点再次搜索相应名称的商品

	}while(c=='y');
	cout<<endl;
	cout<<"……信息删除完毕……"<<endl;
	cout<<"……按任意键返回主菜单……"<<endl;
	getchar();
	system("cls");//清空刷新
}

void Manage::EditGoods()//定义编辑商品信息函数
{
	char c;
	Goods *p;
	bool flag=0;
	int  EditID;

	cout<<" ————————现在进行商品信息的编辑————————"<<endl;
	do
	{
		p=head->next;//令p指向head下一个节点
		flag=0;
		cout<<"请输入您要修改的货物编号：";
		cin>>EditID;
		while(p->next!=NULL&&p->g_ID!=EditID){//直到p指向链表中最后一个节点找到相应编号的商品时跳出循环
			p=p->next;
		}	
		if(p->g_ID==EditID)
		{
			flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
	        "产品类别"<<setw(20)<<"生产厂家"<<setw(20)<<"入库时间"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
			cout<<"确认修改吗？<y/n>";
			cin>>c;
		while(c!='y'&&c!='n'){
			cout<<"指令错误！！！！<请输入y/n>:";
			cin>>c;
		}
		if(c=='y'){
			cout<<"请输入产品名称："<<endl;
			cin>>p->g_Name;
			cout<<"请输入产品产地："<<endl;
			cin>>p->g_Origin;		
			cout<<"请输入产品数量："<<endl;
			cin>>p->g_Num;		
			cout<<"请输入产品进价："<<endl;
			cin>>p->g_InPrice;		
	        cout<<"请输入入库时间（年/月/日）："<<endl;
			cout<<"年：";
			cin>>p->g_Datein.year;
			cout<<"月：";
			cin>>p->g_Datein.month;
			cout<<"日：";
			cin>>p->g_Datein.day;	
			cout<<"请输入生产厂家："<<endl; 
			cin>>p->g_Brand;
			cout<<"修改成功！"<<endl;	
		}
		}
		else{
			 cout<<"取消成功！"<<endl;
		}
		if(flag==0)	{
			cout<<"对不起，您修改的货物不存在！！"<<endl;
		}
			cout<<"您想要继续修改吗？(y/n):";
			cin>>c;
		while(c!='y'&&c!='n'){
			cout<<"指令错误！！！<请输入y/n>:"<<endl;
			cout<<"您想要继续修改吗？(y/n):";
			cin>>c;
		}
		}while(c=='y');
		cout<<endl;
	    cout<<"……信息编辑完毕……"<<endl;
	    cout<<"……按任意键返回主菜单……"<<endl;
		getchar();
		system("cls");//清空刷新
	}
	
	void Manage::SaveGoods()//定义商品信息保存函数
{
		 Goods *p=head;
		 cout<<"————————现在进行商品信息的保存————————"<<endl;
		 ofstream output("货物信息.txt",ios::out);//定义输出文件"货物信息.txt"
		 if(!output)
		 {
			 cerr<<"打开文件<货物信息.txt>失败！！！"<<endl;
		 }
		cout<<setiosflags(ios::left)<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
			"产品类别"<<setw(10)<<"生产厂家"<<setw(20)<<"入库时间"<<endl;
		 output<<"商品总量为: "<<amount<<"\n";
	     output<<setiosflags(ios::left)<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
		 	"产品类别"<<setw(10)<<"生产厂家"<<setw(20)<<"入库时间"<<endl;
		 while(p->next!=NULL)
		 {  
			 p=p->next;
			 cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
		     cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
		     cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Dateout.month<<"/"<<p->g_Datein.day<<endl;
			 output<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;//在文件中显示相应商品信息
			 output<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
			 output<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
		 }
		 cout<<endl;
		 cout<<"成功将货物信息保存到<货物信息.txt>"<<endl;
		 cout<<"……信息保存完毕……"<<endl;
		 cout<<"……按任意键返回主菜单……"<<endl;
		 getchar();
		 output.close();//关闭输出文件
		 system("cls");//清空刷新
	}
	
void Manage::DisplayGoods()//浏览商品信息
{
	Goods *p;
	p=head;
		cout<<"——————现在进行商品信息的浏览—————— "<<endl;
		cout<<setiosflags(ios::left)<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
		"产品类别"<<setw(20)<<"生产厂家"<<setw(20)<<"入库时间"<<endl;
		while(p->next!=NULL)//直到p指向链表中最后一个结点
		{
			p=p->next;
			cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
			cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
			cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
		}
		cout<<endl;
	    cout<<"……信息浏览完毕……"<<endl;
		cout<<"……按任意键返回主菜单……"<<endl;
		getchar();
		system("cls");//清空刷新	
	}
	
void Manage::SellGoods()//商品出库
{
   		Goods *p;
   		char c;
		bool flag=0;
		double sum;
		int SellNum;
		string SellName;
		cout<<"——————现在进行商品的出库——————"<<endl;
		do
		{
			p=head->next;
			flag=0;
			cout<<"请输入您要出库的商品名称：";
			cin>>SellName;
			while(p->next!=NULL&&p->g_Name!=SellName)
				p=p->next;
			if(p->g_Name==SellName)
			{
				flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
	        "产品类别"<<setw(20)<<"生产厂家"<<setw(20)<<"入库时间"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
				cout<<"确认出库吗？<y/n>";
				cin>>c;
				while(c!='y'&&c!='n')
				{
					cout<<"指令错误！！！！<请输入y/n>:";
					cin>>c;
				}
				if(c=='y')
				{
					
		            cout<<"请输入出库的商品数量：";
		            cin>>SellNum;
					if(SellNum<=p->g_Num)//库存量充足
					{
						p->o_num++;//出库次数加1
						p->g_Num=p->g_Num-SellNum;//计算商品出库后商品的库存量
						cout<<"请输入出库的商品价格：";
						cin>>p->g_OutPrice;
						cout<<"请输入出库时间（年/月/日）："<<endl;
						cout<<"年：";
						cin>>p->g_Dateout.year;
						cout<<"月：";
						cin>>p->g_Dateout.month;
						cout<<"日：";
						cin>>p->g_Dateout.day;
						sum=SellNum*p->g_OutPrice;//计算销售金额
						p->g_profit=SellNum*(p->g_OutPrice-p->g_InPrice);//计算利润
						cout<<"此次销售额为： "<<sum<<endl;
						cout<<"此次利润为： "<<p->g_profit<<endl;
						cout<<"出货日期为："<<p->g_Dateout.year<<"/"<<p->g_Dateout.month<<"/"<<p->g_Dateout.day<<endl;
					}
					else
					{
						cout<<"库存不足！出库失败！"<<endl;
					}	
				}
				else cout<<"取消成功！"<<endl;
			}
			if(flag==0)
			{
				cout<<"对不起，您出库的货物不存在！！"<<endl;

			}
			cout<<"您想要继续出库吗？(y/n):";
			cin>>c;
			while(c!='y'&&c!='n')
			{
				cout<<"指令错误！！！<请输入y/n>:"<<endl;
				cout<<"您想要继续出库吗？(y/n):";
				cin>>c;
			}
		}while(c=='y');
		cout<<endl;
	    cout<<"……出库完毕……"<<endl;
	    cout<<"……按任意键返回主菜单……"<<endl;
		getchar();
		system("cls");//清空刷新		
	}
	
void Manage::SearchByID()//按照商品编号查找商品信息
{	
		Goods *p;
		bool flag;
		int FoundID;
		cout<<"——————现在进行商品信息的查找——————"<<endl;
		p=head;
		flag=0;
		cout<<"请输入您要查找的商品编号：";
		cin>>FoundID;
		   while(p->next!=NULL)
			{
			
				p=p->next;
				if(p->g_ID==FoundID)//找到相应编号的商品
				{
				 flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
	        "产品类别"<<setw(20)<<"生产厂家"<<setw(20)<<"入库时间"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
				 break;
				}
			}
		   if(flag==0)
			{
				cout<<"对不起，您查询的商品不存在！！！"<<endl;				
			}
			cout<<endl;
			cout<<"……信息查找完毕……"<<endl;
		    cout<<"……按任意键返回主菜单……"<<endl;
			getchar();
	}
	
void Manage::SearchByName()//按照商品名称查找商品信息
{	
	Goods *p;
	bool flag;
	string FoundName;
	cout<<"——————现在进行商品信息的查找——————"<<endl;
		p=head;
		flag=0;
		cout<<"请输入您要查找的商品名称：";
		cin>>FoundName;
		while(p->next!=NULL)
		{
		
				p=p->next;
				if(p->g_Name==FoundName)//找到相应名称的商品
				{
				 flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
	        "产品类别"<<setw(20)<<"生产厂家"<<setw(20)<<"入库时间"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
				 break;
				}
		}
		if(flag==0)
		{
			cout<<"对不起，您查询的商品不存在！！！"<<endl;		
		}
		cout<<endl;
		cout<<"……信息查找完毕……"<<endl;
	    cout<<"……按任意键返回主菜单……"<<endl;
		getchar();
}

void Manage::SearchByBrand()//按照生产厂家查找商品信息
{
	
	Goods *p;
	bool flag;
	string FoundBrand;
	cout<<"——————现在进行商品信息的查找——————"<<endl;
		p=head;
		flag=0;
		cout<<"请输入您要查找的商品厂家：";
		cin>>FoundBrand;
		while(p->next!=NULL)
		{
		
				p=p->next;
				if(p->g_Brand==FoundBrand)//找到相应生产厂家所对应的商品
				{
				 flag=1;
			cout<<setiosflags(ios::left)<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
	        "产品类别"<<setw(20)<<"生产厂家"<<setw(20)<<"入库时间"<<endl;
            cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
	        cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
	        cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
				}	
		}
		if(flag==0)
		{
			cout<<"对不起，您查询的商品不存在！！！"<<endl;			
		}
		cout<<endl;
		cout<<"……信息查找完毕……"<<endl;
	    cout<<"……按任意键返回主菜单……"<<endl;
		getchar();
}

void Manage::DisplayInput()//入库记录
{
	Goods *p;
	p=head;
		cout<<"——————现在查看商品的入库记录—————— "<<endl;
		cout<<setiosflags(ios::left)<<setw(10)<<"入库次数"<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
		"产品类别"<<setw(20)<<"生产厂家"<<setw(20)<<"入库时间"<<endl;
		while(p->next!=NULL)//直到p指向链表中最后一个结点
		{
			p=p->next;
			cout<<setiosflags(ios::left)<<setw(10)<<p->i_num<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
			cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
			cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Datein.year<<"/"<<p->g_Datein.month<<"/"<<p->g_Datein.day<<endl;
		}
		cout<<endl;
	    cout<<"……入库记录查看完毕……"<<endl;
		cout<<"……按任意键返回主菜单……"<<endl;
		getchar();
		system("cls");//清空刷新	
}	

void Manage::DisplayOutput()//出库记录
{
	Goods *p;
	p=head;
		cout<<"——————现在查看商品的出库记录—————— "<<endl;
		cout<<setiosflags(ios::left)<<setw(10)<<"产品编号"<<setw(10)<<"产品名称"<<setw(10)<<"产品产地"<<setw(10)<<"产品数量"<<setw(10)<<"产品进价"<<setw(10)<<
		"产品类别"<<setw(20)<<"生产厂家"<<setw(20)<<"出库时间"<<endl;
		while(p->next!=NULL)//直到p指向链表中最后一个结点
		{
			p=p->next;
			cout<<setiosflags(ios::left)<<setw(10)<<p->g_ID<<setw(10)<<p->g_Name<<setw(10)<<p->g_Origin;
			cout<<setw(10)<<p->g_Num<<setw(10)<<p->g_InPrice<<setw(10)<<p->g_Type; 
			cout<<setw(20)<<p->g_Brand<<setw(20)<<p->g_Dateout.year<<"/"<<p->g_Dateout.month<<"/"<<p->g_Dateout.day<<endl;
		}
		cout<<endl;
	    cout<<"……入库记录查看完毕……"<<endl;
		cout<<"……按任意键返回主菜单……"<<endl;
		getchar();
		system("cls");//清空刷新	
}	
Manage::~Manage()
{
	
}

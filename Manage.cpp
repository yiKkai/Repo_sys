#include<iostream> 
#include "Manage.h"
#include "Goods.h"
using namespace std;

int main()
{

	Manage manage;
	int choice;//储存用户选项
	while(true)
	{
	//调用展示主菜单成员函数
	manage.Show_Menu1();//显示主菜单
	cout<<"请输入您的选择："<<endl;
	cin>>choice;//用户输入选择
	system("cls");//清空刷新
	switch(choice)//用户选择完后执行的语句
	{
	case 0://退出管理系统
		manage.exitSystem();
		break;
	case 1://入库管理
		manage.InPut();		
		break;
	case 2://出库管理
		manage.OutPut();
		break;
	case 3://商品管理
		manage.Commodit();
		break;
	case 4://商品查询
		manage.Search();
		break;
	case 5://保存信息
		manage.SaveGoods();
		break;
	default:
		system("cls");//清空刷新
		break;	
	}
	system("pause");
	}
}

#include<iostream> 
#include "Manage.h"
#include "Goods.h"
using namespace std;

int main()
{

	Manage manage;
	int choice;//�����û�ѡ��
	while(true)
	{
	//����չʾ���˵���Ա����
	manage.Show_Menu1();//��ʾ���˵�
	cout<<"����������ѡ��"<<endl;
	cin>>choice;//�û�����ѡ��
	system("cls");//���ˢ��
	switch(choice)//�û�ѡ�����ִ�е����
	{
	case 0://�˳�����ϵͳ
		manage.exitSystem();
		break;
	case 1://������
		manage.InPut();		
		break;
	case 2://�������
		manage.OutPut();
		break;
	case 3://��Ʒ����
		manage.Commodit();
		break;
	case 4://��Ʒ��ѯ
		manage.Search();
		break;
	case 5://������Ϣ
		manage.SaveGoods();
		break;
	default:
		system("cls");//���ˢ��
		break;	
	}
	system("pause");
	}
}

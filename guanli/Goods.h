#pragma once//ʹͷ�ļ�ֻ����һ��,��ֹͷ�ļ��ظ�����
#include<iostream>
#include<string>
using namespace std;
 
 //��Ʒ���
 enum GoodsType
 {
 	Food=1,//ʳƷ
    Cosmetic,//��ױƷ
 	Commodity,//����Ʒ
 	Drink//����
 };
 
 struct Date
 {
 	int year;
 	int month;
 	int day;
 };
 
 class  Goods {
 	public:
 		Goods() {
 
 		}
     	int g_ID;//��Ʒ���
 		string g_Name;//��Ʒ����
 		string g_Origin;//��Ʒ����
 		int g_Num;//��Ʒ����
 		double g_InPrice;//��Ʒ����
 		double g_OutPrice;//��Ʒ�ۼ�
 		int g_Value;//��Ʒ�ܳɱ�
 		double g_profit;//��Ʒ����
 		GoodsType g_Type;//��Ʒ���
 		Date g_Datein;//���ʱ��
 		Date g_Dateout;//����ʱ��
 		string g_Brand;//��������
 		Goods *next;
 };

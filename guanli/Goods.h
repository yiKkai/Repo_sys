#pragma once//使头文件只编译一次,防止头文件重复包含
#include<iostream>
#include<string>
using namespace std;
 
 //商品类别
 enum GoodsType
 {
 	Food=1,//食品
    Cosmetic,//化妆品
 	Commodity,//日用品
 	Drink//饮料
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
     	int g_ID;//产品编号
 		string g_Name;//产品名称
 		string g_Origin;//产品产地
 		int g_Num;//产品数量
 		double g_InPrice;//产品进价
 		double g_OutPrice;//产品售价
 		int g_Value;//产品总成本
 		double g_profit;//产品利润
 		GoodsType g_Type;//商品类别
 		Date g_Datein;//入库时间
 		Date g_Dateout;//出库时间
 		string g_Brand;//生产厂家
 		Goods *next;
 };

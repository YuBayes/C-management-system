/*
计算机教研室办公室办公用品管理系统设计

实验设备信息包括：设备编号，设备种类(如：微机、打印机、扫描仪等等)，设备名称，设备价格，设备数量，设备购入日期，是否报废，报废日期等；
主要功能：

1、能够完成对设备的录入和修改
2、对设备进行分类统计
3、设备的破损耗费和遗损处理
4、设备的查询

其他要求：必须实现文件方式存储、导入数据，系统以菜单方式工作
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h> 
#define MAX 200

struct data1
{
	double num;//编号
	char name[20];
	char kind[10];//对应下面种类名字
	int k_num;//对应下方种类(由上方查询或自动生成)
	float value;
	int v_y,v_m,v_d;//购买时间
	int bf;//报废
	int b_y,b_m,b_d;//报废时间
	char bz[310];//报废
}xm[MAX]; 

struct data2//种类
{
	int num;//编号
	char name[10];//种类名字
	double sl;//种类数量[由data1自动添加
}kinds[MAX];//种类管理

struct data3//用户
{
	int num;
	char id[16];
	char pw[20];
}users[MAX];

int Comp11(const void *p1,const void *p2)
{		
	return (*(struct data1 *)p2).num<(*(struct data1 *)p1).num?1:-1;
}

int Comp12(const void *p1,const void *p2)//从大到小
{		
	return (*(struct data1 *)p2).num>(*(struct data1 *)p1).num?1:-1;
}

int Comp21(const void *p1,const void *p2)
{	
	if((*(struct data1 *)p2).k_num==(*(struct data1 *)p1).k_num)
	{
		return (*(struct data1 *)p2).num<(*(struct data1 *)p1).num?1:-1;
	}
	else
	{
		return (*(struct data1 *)p2).k_num<(*(struct data1 *)p1).k_num?1:-1;
	}
}

int Comp22(const void *p1,const void *p2)
{		
	if((*(struct data1 *)p2).k_num==(*(struct data1 *)p1).k_num)
	{
		return (*(struct data1 *)p2).num>(*(struct data1 *)p1).num?1:-1;
	}
	else
	{
		return (*(struct data1 *)p2).k_num>(*(struct data1 *)p1).k_num?1:-1;
	}
}
int Comp31(const void *p1,const void *p2)
{		
	if((*(struct data1 *)p2).v_y==(*(struct data1 *)p1).v_y)
	{
		if((*(struct data1 *)p2).v_m==(*(struct data1 *)p1).v_m)
		{
			if ((*(struct data1 *)p2).v_d==(*(struct data1 *)p1).v_d)
				return (*(struct data1 *)p2).num<(*(struct data1 *)p1).num?1:-1;
			else
				return (*(struct data1 *)p2).v_d<(*(struct data1 *)p1).v_d?1:-1;
		}
		else
			return (*(struct data1 *)p2).v_m<(*(struct data1 *)p1).v_m?1:-1;
	}
	else
		return(*(struct data1 *)p2).v_y<(*(struct data1 *)p1).v_y?1:-1;
}
int Comp32(const void *p1,const void *p2)//从新到旧
{		
	if((*(struct data1 *)p2).v_y==(*(struct data1 *)p1).v_y)
	{
		if((*(struct data1 *)p2).v_m==(*(struct data1 *)p1).v_m)
		{
			if((*(struct data1 *)p2).v_d==(*(struct data1 *)p1).v_d)
				return (*(struct data1 *)p2).num<(*(struct data1 *)p1).num?1:-1;
			else
				return (*(struct data1 *)p2).v_d>(*(struct data1 *)p1).v_d?1:-1;
		}
		
		else
			return (*(struct data1 *)p2).v_m>(*(struct data1 *)p1).v_m?1:-1;
	}
	else
		return(*(struct data1 *)p2).v_y>(*(struct data1 *)p1).v_y?1:-1;
}
int Comp41(const void *p1,const void *p2)
{	
	if((*(struct data1 *)p2).value==(*(struct data1 *)p1).value)
	{
		return (*(struct data1 *)p2).num<(*(struct data1 *)p1).num?1:-1;
	}
	else
	{
		return (*(struct data1 *)p2).value<(*(struct data1 *)p1).value?1:-1;
	}
}

int Comp42(const void *p1,const void *p2)
{		
	if((*(struct data1 *)p2).value==(*(struct data1 *)p1).value)
	{
		return (*(struct data1 *)p2).num>(*(struct data1 *)p1).num?1:-1;
	}
	else
	{
		return (*(struct data1 *)p2).value>(*(struct data1 *)p1).value?1:-1;
	}
}

#include"注册登录.h"
#include"录入.h"
#include"删除.h"
#include"修改.h"
#include"查询.h"
#include"报废.h"
#include"分类.h"
#include"分类整理.h"
#include"排序.h"
#include"统计.h"
#include"信息.h"
#include"保存.h"
#include"读取.h"
#include"菜单.h"
int main()
{
	login();
	menu();

	return 0;
}
/*
����������Ұ칫�Ұ칫��Ʒ����ϵͳ���

ʵ���豸��Ϣ�������豸��ţ��豸����(�磺΢������ӡ����ɨ���ǵȵ�)���豸���ƣ��豸�۸��豸�������豸�������ڣ��Ƿ񱨷ϣ��������ڵȣ�
��Ҫ���ܣ�

1���ܹ���ɶ��豸��¼����޸�
2�����豸���з���ͳ��
3���豸������ķѺ�������
4���豸�Ĳ�ѯ

����Ҫ�󣺱���ʵ���ļ���ʽ�洢���������ݣ�ϵͳ�Բ˵���ʽ����
*/
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h> 
#define MAX 200

struct data1
{
	double num;//���
	char name[20];
	char kind[10];//��Ӧ������������
	int k_num;//��Ӧ�·�����(���Ϸ���ѯ���Զ�����)
	float value;
	int v_y,v_m,v_d;//����ʱ��
	int bf;//����
	int b_y,b_m,b_d;//����ʱ��
	char bz[310];//����
}xm[MAX]; 

struct data2//����
{
	int num;//���
	char name[10];//��������
	double sl;//��������[��data1�Զ����
}kinds[MAX];//�������

struct data3//�û�
{
	int num;
	char id[16];
	char pw[20];
}users[MAX];

int Comp11(const void *p1,const void *p2)
{		
	return (*(struct data1 *)p2).num<(*(struct data1 *)p1).num?1:-1;
}

int Comp12(const void *p1,const void *p2)//�Ӵ�С
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
int Comp32(const void *p1,const void *p2)//���µ���
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

#include"ע���¼.h"
#include"¼��.h"
#include"ɾ��.h"
#include"�޸�.h"
#include"��ѯ.h"
#include"����.h"
#include"����.h"
#include"��������.h"
#include"����.h"
#include"ͳ��.h"
#include"��Ϣ.h"
#include"����.h"
#include"��ȡ.h"
#include"�˵�.h"
int main()
{
	login();
	menu();

	return 0;
}
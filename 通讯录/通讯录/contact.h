#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define Max 101

typedef struct PeoInfo//人的信息
{
	char name[10];
	char sex[10];
	char tele[12];
	char addr[30];
	int age;
}PeoInfo;

typedef struct Contact
{
	PeoInfo data[Max];
	int count ;//记录通讯录实际人的个数
}Contact;

void InitContact(Contact* pc);//初始化通讯录

void AddContact(Contact* ps);//添加通讯录

void ShowContact(const Contact* pd);//显示通讯录

void DelContact(Contact* pl);//删除联系人

void SearchContact(Contact* pd);//搜索联系人

void ModifyContact(Contact* pv);//修改联系人

void SortContact(Contact* pm);//排序
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define Max 101

typedef struct PeoInfo//�˵���Ϣ
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
	int count ;//��¼ͨѶ¼ʵ���˵ĸ���
}Contact;

void InitContact(Contact* pc);//��ʼ��ͨѶ¼

void AddContact(Contact* ps);//���ͨѶ¼

void ShowContact(const Contact* pd);//��ʾͨѶ¼

void DelContact(Contact* pl);//ɾ����ϵ��

void SearchContact(Contact* pd);//������ϵ��

void ModifyContact(Contact* pv);//�޸���ϵ��

void SortContact(Contact* pm);//����
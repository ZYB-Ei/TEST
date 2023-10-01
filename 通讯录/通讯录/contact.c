#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void InitContact(Contact* pc)
{
	assert(pc);
	memset(pc->data, 0, sizeof(pc->data));
	pc->count = 0;
}

void AddContact(Contact* ps)
{
	assert(ps);
	if (ps->count == Max)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	printf("����������:>");
	scanf("%s", ps->data[ps->count].name);
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->count].sex);
	printf("������绰:>");
	scanf("%s", ps->data[ps->count].tele);
	printf("�������ַ:>");
	scanf("%s", ps->data[ps->count].addr);
	printf("����������:>");
	scanf("%d", &(ps->data[ps->count].age));
	ps->count++;
	printf("��ӳɹ�:>");
}

void ShowContact(const Contact* pd)
{
	assert(pd);
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-20s\t%-30s\n", "����:", "����:", "�Ա�:", "�绰:", "��ַ:");
	for (i = 0; i < (pd->count); i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-20s\t%-30s\n", pd->data[i].name,
											   pd->data[i].age,
											   pd->data[i].sex,
											   pd->data[i].tele,
										   	   pd->data[i].addr);			
	}
}

static int FindByName(Contact* pl, char name[])
{
	assert(pl);
	int i = 0;
	for (i = 0; i < pl->count; i++)
	{
		if (0 == strcmp(pl->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pl)
{
	assert(pl);
	char name[10] = { 0 };
	if (pl->count == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������ɾ��������;>");
	scanf("%s", name);

	//ɾ��
	//1.����
	int pos = FindByName(pl, name);
	if (pos == -1)
	{
		printf("���޴���\n");
	}
	//2.ɾ��
	int i = 0;
	for (i = pos; i < pl->count - 1; i++)
	{
		pl->data[i] = pl->data[i + 1];
	}
	pl->count--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pd)
{
	assert(pd);
	char name[10] = { 0 };
	printf("���������������;>");
	scanf("%s", name);
	//1.����
	int pos = FindByName(pd, name);
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	printf("%-10s\t%-5s\t%-5s\t%-20s\t%-30s\n", "����:", "����:", "�Ա�:", "�绰:", "��ַ:");
	printf("%-10s\t%-5d\t%-5s\t%-20s\t%-30s\n", pd->data[pos].name,
												pd->data[pos].age,
												pd->data[pos].sex,
												pd->data[pos].tele,
												pd->data[pos].addr);
}

void ModifyContact(Contact* pv)
{
	assert(pv);
	char name[10] = { 0 };
	printf("�������޸�������;>");
	scanf("%s", name);
	//1.����
	int pos = FindByName(pv, name);
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	printf("%-10s\t%-5s\t%-5s\t%-20s\t%-30s\n", "����:", "����:", "�Ա�:", "�绰:", "��ַ:");
	printf("%-10s\t%-5d\t%-5s\t%-20s\t%-30s\n", pv->data[pos].name,
												pv->data[pos].age,
												pv->data[pos].sex,
												pv->data[pos].tele,
												pv->data[pos].addr);
	printf("�Ƿ�ȷ���޸�\n");
	printf("������Y��N\n");
	unsigned char put='A';
	//2.�޸�
	do
	{
		scanf("%c", &put);
		if (put == 'Y')
		{
			printf("����������:>");
			scanf("%s", pv->data[pos].name);
			printf("�������Ա�:>");
			scanf("%s", pv->data[pos].sex);
			printf("������绰:>");
			scanf("%s", pv->data[pos].tele);
			printf("�������ַ:>");
			scanf("%s", pv->data[pos].addr);
			printf("����������:>");
			scanf("%d", &(pv->data[pos].age));
			printf("�޸ĳɹ�\n");
		}
		else if (put == 'N')
		{
			printf("�˳��޸�\n");
			return;
		}
		else
		{
			printf("�����������������\n");
		}
		int n=getchar();
	} while (put != 'Y');	
}

int cmp_name(const void* n1, const void* n2)
{
	return strcmp(((PeoInfo*)n1)->name, ((PeoInfo*)n1)->name);
}
void SortContact(Contact* pm)
{
	assert(pm);
	qsort(pm->data, pm->count, sizeof(PeoInfo), cmp_name);
}
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
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", ps->data[ps->count].name);
	printf("请输入性别:>");
	scanf("%s", ps->data[ps->count].sex);
	printf("请输入电话:>");
	scanf("%s", ps->data[ps->count].tele);
	printf("请输入地址:>");
	scanf("%s", ps->data[ps->count].addr);
	printf("请输入年龄:>");
	scanf("%d", &(ps->data[ps->count].age));
	ps->count++;
	printf("添加成功:>");
}

void ShowContact(const Contact* pd)
{
	assert(pd);
	int i = 0;
	printf("%-10s\t%-5s\t%-5s\t%-20s\t%-30s\n", "名字:", "年龄:", "性别:", "电话:", "地址:");
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
		printf("通讯录为空\n");
		return;
	}
	printf("请输入删除人名字;>");
	scanf("%s", name);

	//删除
	//1.查找
	int pos = FindByName(pl, name);
	if (pos == -1)
	{
		printf("查无此人\n");
	}
	//2.删除
	int i = 0;
	for (i = pos; i < pl->count - 1; i++)
	{
		pl->data[i] = pl->data[i + 1];
	}
	pl->count--;
	printf("删除成功\n");
}

void SearchContact(Contact* pd)
{
	assert(pd);
	char name[10] = { 0 };
	printf("请输入查找人名字;>");
	scanf("%s", name);
	//1.查找
	int pos = FindByName(pd, name);
	if (pos == -1)
	{
		printf("查无此人\n");
		return;
	}
	printf("%-10s\t%-5s\t%-5s\t%-20s\t%-30s\n", "名字:", "年龄:", "性别:", "电话:", "地址:");
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
	printf("请输入修改人名字;>");
	scanf("%s", name);
	//1.查找
	int pos = FindByName(pv, name);
	if (pos == -1)
	{
		printf("查无此人\n");
		return;
	}
	printf("%-10s\t%-5s\t%-5s\t%-20s\t%-30s\n", "名字:", "年龄:", "性别:", "电话:", "地址:");
	printf("%-10s\t%-5d\t%-5s\t%-20s\t%-30s\n", pv->data[pos].name,
												pv->data[pos].age,
												pv->data[pos].sex,
												pv->data[pos].tele,
												pv->data[pos].addr);
	printf("是否确认修改\n");
	printf("请输入Y或N\n");
	unsigned char put='A';
	//2.修改
	do
	{
		scanf("%c", &put);
		if (put == 'Y')
		{
			printf("请输入名字:>");
			scanf("%s", pv->data[pos].name);
			printf("请输入性别:>");
			scanf("%s", pv->data[pos].sex);
			printf("请输入电话:>");
			scanf("%s", pv->data[pos].tele);
			printf("请输入地址:>");
			scanf("%s", pv->data[pos].addr);
			printf("请输入年龄:>");
			scanf("%d", &(pv->data[pos].age));
			printf("修改成功\n");
		}
		else if (put == 'N')
		{
			printf("退出修改\n");
			return;
		}
		else
		{
			printf("输入错误，请重新输入\n");
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
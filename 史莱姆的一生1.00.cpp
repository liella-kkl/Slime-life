/*�������ƣ�ʷ��ķ��һ��
���ߣ��������ȶ�����ΰ����
�汾ver.1.00 
δ����������ת�� */ 
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<conio.h> 
clock_t start,end;
int endtime;
int main()
{
	int h,f,t,wsl,d=50,day=1;/*h������ֵ��f�Ǳ�ʳ��,t�����ж���ȷ����� ,wsl��ιʳ����d��������
	day������*/ 
	char name[10];
	printf("---------\n");
	printf("I  . .  I\n");
	printf("I       I\n");
	printf("---------\n");
	printf("������ĳ������������ְ�\n") ;
	scanf("%s",name);//����
	printf("����%s,����(�����������)\n",name);
	getch(); 
	h=100;//��������ֵΪ100
 	f=100;//���履ʳ��Ϊ100 
	printf("��ĳ�����������ֵ��һ���Ǳ�ʳ�ȣ�һ��������ֵ(�����������)\n");
	getch();
	printf("---------\n");
	printf("I  . .  I\n");
	printf("I       I\n");
	printf("---------\n");
	printf("����ֵ:%d  ��ʳ�ȣ�%d\n",h,f);
	printf("���ǻ���ʱ�����(�����������)\n") ;
	getch();
	printf("����50������,�����������ι����ĳ���(�����������)\n");
	getch(); 
	printf("ÿ����ιһ�Σ�ϵͳ��ˢ��һ��,��ʳ��5���Ӽ�һ��(���������ʼ��Ϸ)");
	getch();
	start=clock();
	printf("������ιʳ��:");
	scanf("%d",&wsl);
	f=f+wsl;
	d=d-wsl;
	printf("ι   ʳ   ��\n");
	printf("---------\n");
	printf("I  . .  I\n");
	printf("I       I\n");
	printf("---------\n");
	printf("����ֵ:%d  ��ʳ�ȣ�%d  ������=%d(�����������)\n",h,f,d);
	printf("===============================================================day%d\n",day) ;
	getch() ;
	while(h>0)
	{
		printf("���������ʼιʳ\n");
		getch();
		end=clock();
		endtime=(end-start)/1000;
		f=f-endtime;
		if(f<50) 
		{
			if(f<0)
			{
		       h=h+(f/10);
			}
			else
			{
			h=h-(f/10) ;
		    }
		}
		else
		{
			h=h+(h-40)/10;
		}
		printf("Ŀǰ״��\n") ;
		printf("---------\n");
	    printf("I  . .  I\n");
	    printf("I       I\n");
	    printf("---------\n");
	    printf("����ֵ:%d  ��ʳ�ȣ�%d   ������=%d\n",h,f,d);
		printf("������ιʳ��:");
	    scanf("%d",&wsl);
	    f=f+wsl;
	    d=d-wsl;
	    printf("ι   ʳ   ��\n");
	    printf("---------\n");
	    printf("I  . .  I\n");
	    printf("I       I\n");
	    printf("---------\n");
	    printf("����ֵ:%d  ��ʳ�ȣ�%d   ������=%d\n",h,f,d);
	    day=day+1;
	    printf("===================================================day%d\n",day);
	    start=clock();	
	}
	printf("���ĳ���������!!\n");
	printf("______________________________________________________\n");
	printf("�ܽ�\n");
	printf("�������%d\n",day);
	printf("_______________________________________________________");
	return 2233;
	}

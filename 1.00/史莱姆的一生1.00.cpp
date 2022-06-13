/*程序名称：史莱姆的一生
作者：阿拉卡比逗（彭伟明）
版本ver.1.00 
未经允许，不得转载 */ 
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<conio.h> 
clock_t start,end;
int endtime;
int main()
{
	int h,f,t,wsl,d=50,day=1;/*h是生命值，f是饱食度,t用作判断正确或错误 ,wsl是喂食量，d是饲料量
	day是日期*/ 
	char name[10];
	printf("---------\n");
	printf("I  . .  I\n");
	printf("I       I\n");
	printf("---------\n");
	printf("这是你的宠物给他起个名字吧\n") ;
	scanf("%s",name);//起名
	printf("他叫%s,对吗(输任意键继续)\n",name);
	getch(); 
	h=100;//定义生命值为100
 	f=100;//定义饱食度为100 
	printf("你的宠物有两个数值，一个是饱食度，一个是生命值(输任意键继续)\n");
	getch();
	printf("---------\n");
	printf("I  . .  I\n");
	printf("I       I\n");
	printf("---------\n");
	printf("生命值:%d  饱食度：%d\n",h,f);
	printf("他们会随时间变少(输任意键继续)\n") ;
	getch();
	printf("你有50包饲料,你可以用他们喂给你的宠物(输任意键继续)\n");
	getch(); 
	printf("每当你喂一次，系统就刷新一次,饱食度5秒钟减一格(按任意键开始游戏)");
	getch();
	start=clock();
	printf("请输入喂食量:");
	scanf("%d",&wsl);
	f=f+wsl;
	d=d-wsl;
	printf("喂   食   后\n");
	printf("---------\n");
	printf("I  . .  I\n");
	printf("I       I\n");
	printf("---------\n");
	printf("生命值:%d  饱食度：%d  饲料量=%d(按任意键继续)\n",h,f,d);
	printf("===============================================================day%d\n",day) ;
	getch() ;
	while(h>0)
	{
		printf("按任意键开始喂食\n");
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
		printf("目前状况\n") ;
		printf("---------\n");
	    printf("I  . .  I\n");
	    printf("I       I\n");
	    printf("---------\n");
	    printf("生命值:%d  饱食度：%d   饲料量=%d\n",h,f,d);
		printf("请输入喂食量:");
	    scanf("%d",&wsl);
	    f=f+wsl;
	    d=d-wsl;
	    printf("喂   食   后\n");
	    printf("---------\n");
	    printf("I  . .  I\n");
	    printf("I       I\n");
	    printf("---------\n");
	    printf("生命值:%d  饱食度：%d   饲料量=%d\n",h,f,d);
	    day=day+1;
	    printf("===================================================day%d\n",day);
	    start=clock();	
	}
	printf("您的宠物已死亡!!\n");
	printf("______________________________________________________\n");
	printf("总结\n");
	printf("存活天数%d\n",day);
	printf("_______________________________________________________");
	return 2233;
	}

//这是一个用来给用户自测四则运算的程序
//需要用户自行输入题量，并填写答案，结果会显示正确题数


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//结构体，编号，运算符，级别
struct symble
{
	int _num;
	char _sym;
	int level;
}sym[4]={{0,'+',1},{1,'-',1},{2,'*',2},{3,'/',2}};


int chu(int a,int b)//除法
{
	if(b!=0)
		return a/b;
	else
		return (0);
}

//复杂运算函数
int complex(int num,int a,int b)
{
	switch (num) 
	{
case 0:return a+b;
	break;
case 1:return a-b;	
	break;
case 2:return a*b;
	break;
case 3:return chu(a,b);	
	break;
	}
}

//输出函数
int print_1(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
	int result;
	printf("%d %c %d %c %d %c %d = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_3]._num,complex(sym[c_2]._num,complex(sym[c_1]._num,on,tw),th),fo);
	return result;
}
int print_1_1(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
	int result;
	printf("%d %c %d %c %d %c %d = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_3]._num,complex(sym[c_1]._num,on,complex(sym[c_2]._num,tw,th)),fo);
	return result;
}
int print_1_2(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
	int result;
	printf("%d %c %d %c %d %c %d = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_2]._num,complex(sym[c_1]._num,on,tw),complex(sym[c_3]._num,th,fo));
	return result;
}
int print_1_3(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
	int result;
	printf("%d %c %d %c %d %c %d = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_2]._num,complex(sym[c_1]._num,on,tw),complex(sym[c_3]._num,th,fo));
	return result;
}
int print_1_4(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
	int result;
	printf("%d %c %d %c %d %c %d = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_1]._num,on,complex(sym[c_3]._num,complex(sym[c_2]._num,tw,th),fo));
	return result;
}
int print_2(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
    int result;
	printf("%d %c (%d %c %d) %c %d = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_3]._num,complex(sym[c_1]._num,on,complex(sym[c_2]._num,tw,th)),fo);
	return result;
}
int print_2_1(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
    int result;
	printf("%d %c (%d %c %d) %c %d = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_1]._num,on,complex(sym[c_3]._num,complex(sym[c_2]._num,tw,th),fo));
	return result;
}
int print_3(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
	int result;
	printf("%d %c (%d %c %d %c %d) = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_1]._num,on,complex(sym[c_3]._num,complex(sym[c_2]._num,tw,th),fo));
	return result;
}
int print_4(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
	int result;
	printf("(%d %c %d) %c (%d %c %d) = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_2]._num,complex(sym[c_1]._num,on,tw),complex(sym[c_3]._num,th,fo));
	return result;
}
int print_5(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
	int result;
	printf("%d %c %d %c (%d %c %d) = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_2]._num,complex(sym[c_1]._num,on,tw),complex(sym[c_3]._num,th,fo));
	return result;
}
int print_6(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
    int result;
	printf("(%d %c %d %c %d) %c %d = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_3]._num,complex(sym[c_2]._num,complex(sym[c_1]._num,on,tw),th),fo);
	return result;
}
int print_7(int c_1,int c_2,int c_3,int on,int tw,int th,int fo)
{
	int result;
	printf("(%d %c %d) %c %d %c %d = ",on,sym[c_1]._sym,tw,sym[c_2]._sym,th,sym[c_3]._sym,fo);
	result=complex(sym[c_3]._num,complex(sym[c_2]._num,complex(sym[c_1]._num,on,tw),th),fo);
	return result;
}


//加分函数
int sco(int answer,int sum_int)
{
	if(answer==sum_int)
		return(1);
	else
		return(0);
}


//operation函数是用来生成算式的
int operation(int score)
{
	srand((unsigned)time(0));
	int answer;         //接收答案
	int one=rand()%10+1,two=rand()%10+1,three=rand()%10+1,four=rand()%10+1,sum_int;  //sum_int是整数解
	int chioce_1=rand()%4,chioce_2=rand()%4,chioce_3=rand()%4;           //随机决定运算
	if(sym[chioce_1].level==sym[chioce_2].level==sym[chioce_3].level)    //符号都一样的情况
	{
		sum_int=print_1(chioce_1,chioce_2,chioce_3,one,two,three,four);
		scanf("%d",&answer);
		score+=sco(answer,sum_int);
	}
	else if(sym[chioce_1].level>sym[chioce_2].level&&sym[chioce_2].level==sym[chioce_3].level)  //二级，一级，一级的情况
	{
		switch(rand()%3)
		{
		case 0:sum_int=print_1(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		case 1:sum_int=print_2(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		case 2:sum_int=print_3(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		}
		scanf("%d",&answer);
		score+=sco(answer,sum_int);
	}
	else if(sym[chioce_2].level>sym[chioce_1].level&&sym[chioce_1].level==sym[chioce_3].level)  //一级，二级，一级的情况
	{
		switch(rand()%2)
		{
		case 0:sum_int=print_1_1(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		case 1:sum_int=print_4(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		}
		scanf("%d",&answer);
		score+=sco(answer,sum_int);
	}
		else if(sym[chioce_3].level>sym[chioce_2].level&&sym[chioce_2].level==sym[chioce_1].level)  //一级，一级，二级的情况
	{
		switch(rand()%3)
		{
		case 0:sum_int=print_1_2(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		case 1:sum_int=print_2_1(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		case 2:sum_int=print_6(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		}
		scanf("%d",&answer);
		score+=sco(answer,sum_int);
	}
	else if(sym[chioce_1].level==sym[chioce_2].level&&sym[chioce_2].level>sym[chioce_3].level)  //二级，二级，一级的情况
	{
		switch(rand()%2)
		{
		case 0:sum_int=print_1(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		case 1:sum_int=print_5(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		}
		scanf("%d",&answer);
		score+=sco(answer,sum_int);
	}
	else if(sym[chioce_1].level>sym[chioce_2].level&&sym[chioce_1].level==sym[chioce_3].level)  //二级，一级，二级的情况
	{
		switch(rand()%3)
		{
		case 0:sum_int=print_1_3(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		case 1:sum_int=print_2(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		case 2:sum_int=print_6(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		}
		scanf("%d",&answer);
		score+=sco(answer,sum_int);
	}
	else if(sym[chioce_1].level>sym[chioce_2].level&&sym[chioce_2].level==sym[chioce_3].level)  //一级，二级，二级的情况
	{
		switch(rand()%2)
		{
		case 0:sum_int=print_1_4(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		case 1:sum_int=print_7(chioce_1,chioce_2,chioce_3,one,two,three,four);
			break;
		}
		scanf("%d",&answer);
		score+=sco(answer,sum_int);
	}
	return score;
}


//主函数
int main()
{
	int i;
	int number;//用户输入题数
	char Q;
	printf("中文请输入“C”(Please input 'E' for English) :");
	scanf("%c",&Q);
	if(Q=='C')
	{
		do
		{
			int score=0;  //计分
			printf("请输入题数：");
			scanf("%d",&number);
			for(i=0;i<number;i++)
				score=operation(score);//运算函数
			printf("您答对%d题\n",score);
			printf("答错%d题\n",number-score);
			getchar();
			printf("继续请按任意键，结束请输入“e”：");
	    	if(getchar()=='e')//用户输入e可结束测试
		    	break;
		}while(1);
	}
	else
	{
		do
		{
			int score=0;  //计分
			printf("Please input number：");
			scanf("%d",&number);
			for(i=0;i<number;i++)
				score=operation(score);//运算函数
			printf("Correct answer’s number：%d\n",score);
			printf("Wrong answer’s number ：%d\n",number-score);
			getchar();
			printf("Please press any key to continue,input “e”to end：");
	    	if(getchar()=='e')//用户输入e可结束测试
		    	break;
		}while(1);
	}
	return 0;
}

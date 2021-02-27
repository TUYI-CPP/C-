#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

typedef struct score{     
	char kemu[20];         
	double zongping;     
	double xuefen;      
	double jidian;     
	char dengji[5];     
}SCORE;

SCORE shuru(SCORE sco[],int N){
	int i;
	for(i=0;i<N;i++){
		cout<<"输入科目名称：";
		cin>>sco[i].kemu;
		cout<<"输入该科目期末总评成绩：";
		cin>>sco[i].zongping;
		cout<<"输入该科目所对应的学分：";
		cin>>sco[i].xuefen; 
	}
}

SCORE jidian(SCORE sco[],int N){
	int i;
	for(i=0;i<N;i++){
		if(sco[i].zongping>=90&&sco[i].zongping<=100){
			sco[i].jidian=4.0;
			strcpy(sco[i].dengji,"A ");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=85&&sco[i].zongping<=89.9){
			sco[i].jidian=3.7;
			strcpy(sco[i].dengji,"A-");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=82&&sco[i].zongping<=84.9){
			sco[i].jidian=3.3;
			strcpy(sco[i].dengji,"B+");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=78&&sco[i].zongping<=81.9){
			sco[i].jidian=3.0;
			strcpy(sco[i].dengji,"B ");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=75&&sco[i].zongping<=77.9){
			sco[i].jidian=2.7;
			strcpy(sco[i].dengji,"B-");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=72&&sco[i].zongping<=74.9){
			sco[i].jidian=2.3;
			strcpy(sco[i].dengji,"C+");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=68&&sco[i].zongping<=71.9){
			sco[i].jidian=2.0;
			strcpy(sco[i].dengji,"C ");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=66&&sco[i].zongping<=67.9){
			sco[i].jidian=1.7;
			strcpy(sco[i].dengji,"C-");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=64&&sco[i].zongping<=65.9){
			sco[i].jidian=1.5;
			strcpy(sco[i].dengji,"D ");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=60&&sco[i].zongping<=63.9){
			sco[i].jidian=1.0;
			strcpy(sco[i].dengji,"D-");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		else if(sco[i].zongping<60){
			sco[i].jidian=0;
			strcpy(sco[i].dengji,"E ");
			cout<<"No."<<i+1<<" 科目："<<sco[i].kemu<<" \t成绩："<<sco[i].zongping<<"\t学分："<<sco[i].xuefen<<"  \t等级："<<sco[i].dengji<<"\t绩点："<<sco[i].jidian<<endl;}
		
	}
}

SCORE pingjun(SCORE sco[],int N){
	int i;
	double fenzi,fenmu,pingjun;
	fenzi=0;
	fenmu=0;
	jidian(sco,N);
	for(i=0;i<N;i++){
		fenzi=sco[i].jidian*sco[i].xuefen+fenzi;
		fenmu=fenmu+sco[i].xuefen;
	}
	pingjun=fenzi/fenmu;
	//cout<<"平均学分绩点为："<<pingjun<<endl;
	if(pingjun>=1.5){
		cout<<"恭喜主人！您的平均学分绩点为："<<pingjun<<"；超过了最低要求1.5，所以您可以拿到学位证！"<<endl; 
	}
	else{
		while(1){
		cout<<"震惊！！！你的平均学分绩点才有"<<pingjun<<"你拿不了学位证！！！还不滚去学习！！！"<<endl;
    	}
	}
}

SCORE xiugai(SCORE sco[],int N){
	char ch[20];
	int i;
	cout<<"请输入要修改的科目名称：";
	cin>>ch;
	for(i=0;i<N;i++){
		if(strcmp(ch,sco[i].kemu)==0){
			double m;
			cout<<"请输入修改后"<<sco[i].kemu<<"的期末总评：";
			cin>>m; 
			sco[i].zongping=m;
			int j;
			cout<<"是否继续修改"<<sco[i].kemu<<"的学分？\n继续修改输入 1 / 结束修改输入 0 ：" ;
			cin>>j;
			if(j==1){
				double a; 
				cout<<"请输入修改后"<<sco[i].kemu<<"的学分：";
				cin>>a;
				sco[i].xuefen=a;
			}
		}
		else if(strcmp(ch,sco[i].kemu)!=0){
			cout<<"输入错误!!!请重新输入!!!"<<endl;
			xiugai(sco,N);
		}
	}
}

int main(void){
	cout<<"科目数量：";
	int N;
	cin>>N; 
	SCORE sco[N];
	int k=0;
	while(1){//为用户提供一个选择菜单 
		cout<<endl;
		cout<<"***************************"<<endl;
		cout<<"********** 菜单 ***********"<<endl;
		cout<<"**** 1--输入成绩 **********"<<endl;
		cout<<"**** 2--查看各科目绩点 ****"<<endl;
		cout<<"**** 3--查看平均学分绩点 **"<<endl; 
		cout<<"**** 4--修改某科成绩 ******"<<endl;
		cout<<"**** 0--退出 **************"<<endl;
		cout<<"***************************"<<endl;
		cout<<"请选择：";//提示用对菜单进行选择 
		cin>>k;
		switch(k)
		{	case 0:	exit(0);
 			case 1: shuru(sco,N);//调用函数shuru
					break;
			case 2:	jidian(sco,N);//调用函数jidian
					break;
			case 3: pingjun(sco,N);//调用函数pingjun
			        break;
			case 4: xiugai(sco,N);//调用函数xiugai
			        break;	 
		}
	}
	return 0;
}


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
		cout<<"�����Ŀ���ƣ�";
		cin>>sco[i].kemu;
		cout<<"����ÿ�Ŀ��ĩ�����ɼ���";
		cin>>sco[i].zongping;
		cout<<"����ÿ�Ŀ����Ӧ��ѧ�֣�";
		cin>>sco[i].xuefen; 
	}
}

SCORE jidian(SCORE sco[],int N){
	int i;
	for(i=0;i<N;i++){
		if(sco[i].zongping>=90&&sco[i].zongping<=100){
			sco[i].jidian=4.0;
			strcpy(sco[i].dengji,"A ");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=85&&sco[i].zongping<=89.9){
			sco[i].jidian=3.7;
			strcpy(sco[i].dengji,"A-");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=82&&sco[i].zongping<=84.9){
			sco[i].jidian=3.3;
			strcpy(sco[i].dengji,"B+");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=78&&sco[i].zongping<=81.9){
			sco[i].jidian=3.0;
			strcpy(sco[i].dengji,"B ");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=75&&sco[i].zongping<=77.9){
			sco[i].jidian=2.7;
			strcpy(sco[i].dengji,"B-");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=72&&sco[i].zongping<=74.9){
			sco[i].jidian=2.3;
			strcpy(sco[i].dengji,"C+");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=68&&sco[i].zongping<=71.9){
			sco[i].jidian=2.0;
			strcpy(sco[i].dengji,"C ");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=66&&sco[i].zongping<=67.9){
			sco[i].jidian=1.7;
			strcpy(sco[i].dengji,"C-");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=64&&sco[i].zongping<=65.9){
			sco[i].jidian=1.5;
			strcpy(sco[i].dengji,"D ");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping>=60&&sco[i].zongping<=63.9){
			sco[i].jidian=1.0;
			strcpy(sco[i].dengji,"D-");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		else if(sco[i].zongping<60){
			sco[i].jidian=0;
			strcpy(sco[i].dengji,"E ");
			cout<<"No."<<i+1<<" ��Ŀ��"<<sco[i].kemu<<" \t�ɼ���"<<sco[i].zongping<<"\tѧ�֣�"<<sco[i].xuefen<<"  \t�ȼ���"<<sco[i].dengji<<"\t���㣺"<<sco[i].jidian<<endl;}
		
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
	//cout<<"ƽ��ѧ�ּ���Ϊ��"<<pingjun<<endl;
	if(pingjun>=1.5){
		cout<<"��ϲ���ˣ�����ƽ��ѧ�ּ���Ϊ��"<<pingjun<<"�����������Ҫ��1.5�������������õ�ѧλ֤��"<<endl; 
	}
	else{
		while(1){
		cout<<"�𾪣��������ƽ��ѧ�ּ������"<<pingjun<<"���ò���ѧλ֤������������ȥѧϰ������"<<endl;
    	}
	}
}

SCORE xiugai(SCORE sco[],int N){
	char ch[20];
	int i;
	cout<<"������Ҫ�޸ĵĿ�Ŀ���ƣ�";
	cin>>ch;
	for(i=0;i<N;i++){
		if(strcmp(ch,sco[i].kemu)==0){
			double m;
			cout<<"�������޸ĺ�"<<sco[i].kemu<<"����ĩ������";
			cin>>m; 
			sco[i].zongping=m;
			int j;
			cout<<"�Ƿ�����޸�"<<sco[i].kemu<<"��ѧ�֣�\n�����޸����� 1 / �����޸����� 0 ��" ;
			cin>>j;
			if(j==1){
				double a; 
				cout<<"�������޸ĺ�"<<sco[i].kemu<<"��ѧ�֣�";
				cin>>a;
				sco[i].xuefen=a;
			}
		}
		else if(strcmp(ch,sco[i].kemu)!=0){
			cout<<"�������!!!����������!!!"<<endl;
			xiugai(sco,N);
		}
	}
}

int main(void){
	cout<<"��Ŀ������";
	int N;
	cin>>N; 
	SCORE sco[N];
	int k=0;
	while(1){//Ϊ�û��ṩһ��ѡ��˵� 
		cout<<endl;
		cout<<"***************************"<<endl;
		cout<<"********** �˵� ***********"<<endl;
		cout<<"**** 1--����ɼ� **********"<<endl;
		cout<<"**** 2--�鿴����Ŀ���� ****"<<endl;
		cout<<"**** 3--�鿴ƽ��ѧ�ּ��� **"<<endl; 
		cout<<"**** 4--�޸�ĳ�Ƴɼ� ******"<<endl;
		cout<<"**** 0--�˳� **************"<<endl;
		cout<<"***************************"<<endl;
		cout<<"��ѡ��";//��ʾ�öԲ˵�����ѡ�� 
		cin>>k;
		switch(k)
		{	case 0:	exit(0);
 			case 1: shuru(sco,N);//���ú���shuru
					break;
			case 2:	jidian(sco,N);//���ú���jidian
					break;
			case 3: pingjun(sco,N);//���ú���pingjun
			        break;
			case 4: xiugai(sco,N);//���ú���xiugai
			        break;	 
		}
	}
	return 0;
}


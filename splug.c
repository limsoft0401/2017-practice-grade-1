//����� ����: ���ڿ�����,���ڿ���ġ��,�����޸��Ҵ�,����ü,������,���������,�ý����Լ� 
 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h> 

int putone();
int puttwo();
int putthree();
int putfour();
int putfive();
int putseven();
int puteight();


struct puttwo pt;

struct puttwo{
	char *b;
	char *c;
	char *d;
};


int main(){
	//�ð���� 
	time_t c=time(NULL);
	struct tm *b=localtime(&c);
	printf("\t���� �ð� : %d�� %d��\n",b->tm_hour,b->tm_min);
	//���θ޴� 
	

	
	int a;
	printf("\n\n\t\t\t==�޴�==\n\n\t\t1.��� �ּҷ� ���� ���\n\t\t2.ȸ�����\n\t\t3.ȸ�� ���� �˻�\n\t\t4.ȸ�� ���� ����\n\t\t5.ȸ�� ����\n\t\t6.���α׷� ����\n\t\t7.�޸𾲱�\n\t\t8.�޸����б�\n");
	printf("\n***************************************************\n");
	printf("\t������ ����� �Է����ּ���:");
	scanf("%d",&a);

	
	//�ɼ�1 
	if(a==1){
	char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	printf("ȸ������� ����մϴ�.");
	sleep(1);
	system("cls");
	putone();
	printf("\n\n�ʱ�ȭ������ ���ư����� a�� ��������:");
	fflush(stdin);
	f=getchar();
	if(f=='a'||f=='A'){
		system("cls");
		printf("�ʱ� �޴��� ���ư��ϴ�");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
		
			}
		
	
			
			
	//�ɼ�2		
	if(a==2){
	char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	puttwo();
	
	printf("\n\n�ʱ�ȭ������ ���ư����� a�� ��������:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("�ʱ� �޴��� ���ư��ϴ�");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
			
			}
	
	//�ɼ�3		
	if(a==3){
	char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	putthree();
	printf("\n\n�ʱ�ȭ������ ���ư����� a�� ��������:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("�ʱ� �޴��� ���ư��ϴ�");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
	
	}
			
	if(a==4){
		
	char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	putfour();
	printf("\n\n�ʱ�ȭ������ ���ư����� a�� ��������:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("�ʱ� �޴��� ���ư��ϴ�");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
	
	}

	if(a==5){
	char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	putfive();
	
	printf("\n\n�ʱ�ȭ������ ���ư����� a�� ��������:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("�ʱ� �޴��� ���ư��ϴ�");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
			
			}
	
	//�ɼ�6 
	if(a==6){
		system("cls");
		printf("���� ��.......");
		sleep(1);
		system("cls");
		printf("���α׷��� �����մϴ�");
		return 0; 
	}
	
	//�ɼ�7 
	if(a==7){
		char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	putseven();
	printf("\n\n�ʱ�ȭ������ ���ư����� a�� ��������:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("�ʱ� �޴��� ���ư��ϴ�");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
				
	}
	
	//�ɼ�8 
	if(a==8){
			char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	puteight();
	printf("\n\n�ʱ�ȭ������ ���ư����� a�� ��������:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("�ʱ� �޴��� ���ư��ϴ�");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
	}
}


// �ܺ� �Լ� ���� 

//1st 
int putone(){
	FILE* juso;
	juso=fopen("�ּ�.txt","rt");
	
	if(juso==NULL)
		printf("\a���Ͽ������!!");
	
	while(!feof(juso)){
		printf("%c",fgetc(juso));}
	printf("\n\n\n\n");
	fclose(juso);
}


//2nd
int puttwo(){
	pt.b=(char*)malloc(1000);
	pt.c=(char*)malloc(1000);
	pt.d=(char*)malloc(1000);
	char e[10]=".txt";
	char f[50];
	
	printf("\nȸ�� ���� ����� �����մϴ�.");
	sleep(1);
	system("cls");
	
	printf("\n\n�Ʒ��� ������ �Է����ּ���\n");
	printf("*******************************************");
	fflush(stdin);
	printf("\n�̸��� �Է����ּ���:");
	gets(pt.b);
	fflush(stdin);
	strcpy(f,pt.b);
	
	strcat(pt.b,e);
	printf("%c",f);
	FILE* juso;
	juso=fopen(pt.b,"w+");
	fflush(stdin);

	printf("\n�ּҸ� �Է����ּ���:");
	gets(pt.c);
	fflush(stdin);
	printf("\n��ȭ��ȣ�� �Է����ּ���: 010 ");
	gets(pt.d);
	fflush(stdin);
	system("cls");
	printf("\n\nloading....");
	sleep(1);
	system("cls");
	
	printf("���� �����Ͻðڽ��ϱ�? PRESS 1\n�̾ �����Ͻðڽ��ϱ�? PRESS 2\ncoomand:");
	char g;
	fflush(stdin);
	g=getchar();
	fflush(stdin);
	
	if(g=='1'){
	
	FILE *juso2;
	juso2=fopen("�ּ�.txt","w+");
	
	fprintf(juso2,"\n================================================================================================================\n");
	fprintf(juso2,"�̸�:%s\n\n�ּ�:%s\n\n��ȭ��ȣ:010 %s",f,pt.c,pt.d);
	fprintf(juso2,"\n================================================================================================================\n");
	
	fclose(juso2);}
	
	if(g=='2'){
	FILE *juso2;
	juso2=fopen("�ּ�.txt","a+");
	
	fprintf(juso2,"\n================================================================================================================\n");
	fprintf(juso2,"�̸�:%s\n\n�ּ�:%s\n\n��ȭ��ȣ:010 %s",f,pt.c,pt.d);
	fprintf(juso2,"\n================================================================================================================\n");
	
	fclose(juso2);}
	
	
	printf("\n\n�߰��Ǿ����ϴ�\a");
	
	fprintf(juso,"\n================================================================================================================\n");
	fprintf(juso,"�̸�:%s\n\n�ּ�:%s\n\n��ȭ��ȣ:010 %s",f,pt.c,pt.d);
	fprintf(juso,"\n================================================================================================================\n");
	
	
	free(pt.b);
	free(pt.c);
	free(pt.d);
	
	fclose(juso);
		}
	
		
	


//3rd
int putthree(){
	char *c=(char*)malloc(sizeof(1000));
	char b[7]=".txt";
	
	printf("�ּҷ� �˻��� �����մϴ�");
	sleep(1);
	system("cls");
	
	printf("ã���ô� �̸��� ��Ȯ�� �Է¹ٶ��ϴ�:");
	fflush(stdin);
	gets(c); 
	fflush(stdin);
	strcat(c,b);
	printf("������ �˻����Դϴ� "); 
	sleep(1);
	system("cls");
	
	FILE *juso3;
	juso3=fopen(c,"r");
	
	if(juso3==NULL)
		printf("�ּҷϿ� �����ϴ�");
	
	else{
	while(!feof(juso3))
		printf("%c",fgetc(juso3));
	
	free(c);
	fclose(juso3);}
	
}

int putfour(){
	char *a=(char*)malloc(sizeof(1000));
	char b[10]=".txt";
	char c[100],h[100],k[100],p[100];
	char *d=(char*)malloc(sizeof(1000));
	char *e=(char*)malloc(sizeof(1000));
	int f,i,j;
	char *g=(char*)malloc(sizeof(1000));
		
	printf("�ּҷ� ������ �����մϴ�.");
	sleep(1);
	system("cls");
	printf("������ ȸ���� �̸��� �Է��ϼ���:");
	fflush(stdin);
	gets(a);//�̸��ޱ� 
	fflush(stdin);
	strcpy(c,a);//�̸���c������ 
	
	strcat(a,b);//�̸�.txt=a
	fflush(stdin);
	system("cls");
	
	printf("%s���� ���������� ����մϴ�.\n\n",c);
	
	FILE* new2;
	new2=fopen(a,"r");
	while(!feof(new2))
		printf("%c",fgetc(new2));
	fclose(new2);
	
	printf("\n\n===����===\n");
	
	FILE *vasco;
	vasco=fopen(a,"wt");
	
	printf("�̸��Է�:");
	fflush(stdin);
	gets(g);
	fflush(stdin);
	printf("\n�ּ�:");
	fflush(stdin);
	gets(h);
	fflush(stdin);
	printf("��ȭ��ȣ: 010 ");
	gets(k);
	fflush(stdin);
	
	fprintf(vasco,"\n================================================================================================================\n");
	fprintf(vasco,"�̸�:%s\n\n�ּ�:%s\n\n��ȭ��ȣ:010 %s",g,h,k);
	fprintf(vasco,"\n================================================================================================================\n");
	 
	fclose(vasco);
	remove(a);
	
	FILE* new;
	strcpy(p,g);
	strcat(g,b);
	
	new=fopen(g,"w+");
	fprintf(new,"\n================================================================================================================\n");
	fprintf(new,"�̸�:%s\n\n�ּ�:%s\n\n��ȭ��ȣ:010 %s",p,h,k);
	fprintf(new,"\n================================================================================================================\n");
	
	fclose(new);
	
	free(a);
	free(d);
	free(e);
	free(g);
	
}

int putfive(){
	char *a=(char*)malloc(sizeof(1000));
	char b[10]=".txt";
	char f[1000];
	
	printf("������ ���ϴ� �ּҷ� �̸��� ��Ȯ�� �Է����ּ���:");
	fflush(stdin);
	gets(a);
	strcpy(f,a);
	fflush(stdin);
	strcat(a,b);
	remove(a);
	system("cls");
	printf("������ ���� ��..\n");
	sleep(1);
	printf("�ּҷϿ��� %s�� ������ ���� �Ǿ����ϴ�!!\n\n",f);

	free(a);
}

//7th
int putseven(){

	printf("���� �޸��� ������ ����մϴ�.");
	sleep(1);
	system("cls");
	
	FILE *memo2;
	memo2=fopen("memo.txt","rt");
	while(!feof(memo2))
		printf("%c",fgetc(memo2));
	fclose(memo2);
	
	char b;
	fflush(stdin);
	printf("\n\n\n\===============\ncommand\n===============\n1�� ������ ������ ��� �����ϰ� �ٽ� �ۼ��մϴ�.\n2�� ������ �̾ �ۼ��մϴ�\n");
	b=getchar();
	fflush(stdin);
	
	if(b=='1'){
	system("cls");
	printf("���ξ��⸦ �����ϼ̽��ϴ�.");
	sleep(1);
	system("cls");
	char *a;
	a=(char*)malloc(sizeof(10000));
	printf("�޸����� �������Դϴ�\t������ �Է¹ٶ��ϴ�\n=======================================\n");
	
	FILE* memo;
	memo=fopen("memo.txt","w+");
	fflush(stdin);
	gets(a);
	
	fprintf(memo,"%s\n",a);
	free(a);
	fclose(memo);
	printf("�������Դϴ�..!!");
 	sleep(1);
	system("cls");
	printf("����Ǿ����ϴ�..!!\a");
			}
			
	if(b=='2'){
	system("cls");
	printf("�̾�⸦ �����ϼ̽��ϴ�.");
	sleep(1);
	system("cls");
	char *a;
	a=(char*)malloc(10000);
	printf("�޸����� �������Դϴ�\t������ �Է¹ٶ��ϴ�\n=======================================\n");

	FILE *memo2;
	memo2=fopen("memo.txt","rt");
	while(!feof(memo2))
		printf("%c",fgetc(memo2));
	fclose(memo2);
	
	FILE* memo;
	memo=fopen("memo.txt","a+");
	fflush(stdin);
	gets(a);
	
	fprintf(memo,"%s\n",a);
	free(a);
	fclose(memo);
	printf("�������Դϴ�..!!");
 	sleep(1);
	system("cls");
	printf("����Ǿ����ϴ�..!!\a");
			}
}

//8th
int puteight(){
	FILE* memoread;
	memoread=fopen("memo.txt","rt");
	
	printf("�޸����� ����մϴ�");
	sleep(1);
	system("cls");
	printf("=======================================\n");
	while(!feof(memoread))
		printf("%c",fgetc(memoread));
	printf("\a");
	fclose(memoread);
}




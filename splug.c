//사용한 개념: 문자열복사,문자열합치기,동적메모리할당,구조체,포인터,파일입출력,시스템함수 
 
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
	//시간출력 
	time_t c=time(NULL);
	struct tm *b=localtime(&c);
	printf("\t현재 시간 : %d시 %d분\n",b->tm_hour,b->tm_min);
	//메인메뉴 
	

	
	int a;
	printf("\n\n\t\t\t==메뉴==\n\n\t\t1.모든 주소록 정보 출력\n\t\t2.회원등록\n\t\t3.회원 정보 검색\n\t\t4.회원 정보 수정\n\t\t5.회원 삭제\n\t\t6.프로그램 종료\n\t\t7.메모쓰기\n\t\t8.메모장읽기\n");
	printf("\n***************************************************\n");
	printf("\t선택할 기능을 입력해주세요:");
	scanf("%d",&a);

	
	//옵션1 
	if(a==1){
	char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	printf("회원목록을 출력합니다.");
	sleep(1);
	system("cls");
	putone();
	printf("\n\n초기화면으로 돌아가려면 a를 누르세요:");
	fflush(stdin);
	f=getchar();
	if(f=='a'||f=='A'){
		system("cls");
		printf("초기 메뉴로 돌아갑니다");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
		
			}
		
	
			
			
	//옵션2		
	if(a==2){
	char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	puttwo();
	
	printf("\n\n초기화면으로 돌아가려면 a를 누르세요:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("초기 메뉴로 돌아갑니다");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
			
			}
	
	//옵션3		
	if(a==3){
	char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	putthree();
	printf("\n\n초기화면으로 돌아가려면 a를 누르세요:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("초기 메뉴로 돌아갑니다");
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
	printf("\n\n초기화면으로 돌아가려면 a를 누르세요:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("초기 메뉴로 돌아갑니다");
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
	
	printf("\n\n초기화면으로 돌아가려면 a를 누르세요:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("초기 메뉴로 돌아갑니다");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
			
			}
	
	//옵션6 
	if(a==6){
		system("cls");
		printf("종료 중.......");
		sleep(1);
		system("cls");
		printf("프로그램을 종료합니다");
		return 0; 
	}
	
	//옵션7 
	if(a==7){
		char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	putseven();
	printf("\n\n초기화면으로 돌아가려면 a를 누르세요:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("초기 메뉴로 돌아갑니다");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
				
	}
	
	//옵션8 
	if(a==8){
			char f;
	system("cls");
	printf("loading...");
	sleep(1);
	system("cls");
	puteight();
	printf("\n\n초기화면으로 돌아가려면 a를 누르세요:");
	fflush(stdin);
	f=getchar();
	
	if(f=='a'||f=='A'){
		system("cls");
		printf("초기 메뉴로 돌아갑니다");
		printf("\nloading...");
		sleep(1);
		system("cls");
		main();			}
	}
}


// 외부 함수 설정 

//1st 
int putone(){
	FILE* juso;
	juso=fopen("주소.txt","rt");
	
	if(juso==NULL)
		printf("\a파일열기오류!!");
	
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
	
	printf("\n회원 정보 등록을 시작합니다.");
	sleep(1);
	system("cls");
	
	printf("\n\n아래의 정보를 입력해주세요\n");
	printf("*******************************************");
	fflush(stdin);
	printf("\n이름을 입력해주세요:");
	gets(pt.b);
	fflush(stdin);
	strcpy(f,pt.b);
	
	strcat(pt.b,e);
	printf("%c",f);
	FILE* juso;
	juso=fopen(pt.b,"w+");
	fflush(stdin);

	printf("\n주소를 입력해주세요:");
	gets(pt.c);
	fflush(stdin);
	printf("\n전화번호를 입력해주세요: 010 ");
	gets(pt.d);
	fflush(stdin);
	system("cls");
	printf("\n\nloading....");
	sleep(1);
	system("cls");
	
	printf("새로 저장하시겠습니까? PRESS 1\n이어서 저장하시겠습니까? PRESS 2\ncoomand:");
	char g;
	fflush(stdin);
	g=getchar();
	fflush(stdin);
	
	if(g=='1'){
	
	FILE *juso2;
	juso2=fopen("주소.txt","w+");
	
	fprintf(juso2,"\n================================================================================================================\n");
	fprintf(juso2,"이름:%s\n\n주소:%s\n\n전화번호:010 %s",f,pt.c,pt.d);
	fprintf(juso2,"\n================================================================================================================\n");
	
	fclose(juso2);}
	
	if(g=='2'){
	FILE *juso2;
	juso2=fopen("주소.txt","a+");
	
	fprintf(juso2,"\n================================================================================================================\n");
	fprintf(juso2,"이름:%s\n\n주소:%s\n\n전화번호:010 %s",f,pt.c,pt.d);
	fprintf(juso2,"\n================================================================================================================\n");
	
	fclose(juso2);}
	
	
	printf("\n\n추가되었습니다\a");
	
	fprintf(juso,"\n================================================================================================================\n");
	fprintf(juso,"이름:%s\n\n주소:%s\n\n전화번호:010 %s",f,pt.c,pt.d);
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
	
	printf("주소록 검색을 시작합니다");
	sleep(1);
	system("cls");
	
	printf("찾으시는 이름을 정확히 입력바랍니다:");
	fflush(stdin);
	gets(c); 
	fflush(stdin);
	strcat(c,b);
	printf("파일을 검색중입니다 "); 
	sleep(1);
	system("cls");
	
	FILE *juso3;
	juso3=fopen(c,"r");
	
	if(juso3==NULL)
		printf("주소록에 없습니다");
	
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
		
	printf("주소록 수정을 시작합니다.");
	sleep(1);
	system("cls");
	printf("수정할 회원의 이름을 입력하세요:");
	fflush(stdin);
	gets(a);//이름받기 
	fflush(stdin);
	strcpy(c,a);//이름만c에저장 
	
	strcat(a,b);//이름.txt=a
	fflush(stdin);
	system("cls");
	
	printf("%s님의 기존정보를 출력합니다.\n\n",c);
	
	FILE* new2;
	new2=fopen(a,"r");
	while(!feof(new2))
		printf("%c",fgetc(new2));
	fclose(new2);
	
	printf("\n\n===수정===\n");
	
	FILE *vasco;
	vasco=fopen(a,"wt");
	
	printf("이름입력:");
	fflush(stdin);
	gets(g);
	fflush(stdin);
	printf("\n주소:");
	fflush(stdin);
	gets(h);
	fflush(stdin);
	printf("전화번호: 010 ");
	gets(k);
	fflush(stdin);
	
	fprintf(vasco,"\n================================================================================================================\n");
	fprintf(vasco,"이름:%s\n\n주소:%s\n\n전화번호:010 %s",g,h,k);
	fprintf(vasco,"\n================================================================================================================\n");
	 
	fclose(vasco);
	remove(a);
	
	FILE* new;
	strcpy(p,g);
	strcat(g,b);
	
	new=fopen(g,"w+");
	fprintf(new,"\n================================================================================================================\n");
	fprintf(new,"이름:%s\n\n주소:%s\n\n전화번호:010 %s",p,h,k);
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
	
	printf("삭제를 원하는 주소록 이름을 정확히 입력해주세요:");
	fflush(stdin);
	gets(a);
	strcpy(f,a);
	fflush(stdin);
	strcat(a,b);
	remove(a);
	system("cls");
	printf("파일을 삭제 중..\n");
	sleep(1);
	printf("주소록에서 %s의 정보가 삭제 되었습니다!!\n\n",f);

	free(a);
}

//7th
int putseven(){

	printf("기존 메모장 내용을 출력합니다.");
	sleep(1);
	system("cls");
	
	FILE *memo2;
	memo2=fopen("memo.txt","rt");
	while(!feof(memo2))
		printf("%c",fgetc(memo2));
	fclose(memo2);
	
	char b;
	fflush(stdin);
	printf("\n\n\n\===============\ncommand\n===============\n1을 누르면 내용을 모두 삭제하고 다시 작성합니다.\n2를 누르면 이어서 작성합니다\n");
	b=getchar();
	fflush(stdin);
	
	if(b=='1'){
	system("cls");
	printf("새로쓰기를 선택하셨습니다.");
	sleep(1);
	system("cls");
	char *a;
	a=(char*)malloc(sizeof(10000));
	printf("메모기능이 실행중입니다\t내용을 입력바랍니다\n=======================================\n");
	
	FILE* memo;
	memo=fopen("memo.txt","w+");
	fflush(stdin);
	gets(a);
	
	fprintf(memo,"%s\n",a);
	free(a);
	fclose(memo);
	printf("저장중입니다..!!");
 	sleep(1);
	system("cls");
	printf("저장되었습니다..!!\a");
			}
			
	if(b=='2'){
	system("cls");
	printf("이어쓰기를 선택하셨습니다.");
	sleep(1);
	system("cls");
	char *a;
	a=(char*)malloc(10000);
	printf("메모기능이 실행중입니다\t내용을 입력바랍니다\n=======================================\n");

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
	printf("저장중입니다..!!");
 	sleep(1);
	system("cls");
	printf("저장되었습니다..!!\a");
			}
}

//8th
int puteight(){
	FILE* memoread;
	memoread=fopen("memo.txt","rt");
	
	printf("메모장을 출력합니다");
	sleep(1);
	system("cls");
	printf("=======================================\n");
	while(!feof(memoread))
		printf("%c",fgetc(memoread));
	printf("\a");
	fclose(memoread);
}




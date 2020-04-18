#include "manager.h"

void listProduct(Product *plist, int count){
 //전체 제품의 리스트를 출력
	printf("no name  weight  price  표준 가격  별점수\n");
	printf("*****************************************\n");
	for (int i = 0; i < count ; i++){
	  if (plist[i].weight == -1) continue;
	   printf("%2d ", i+1);
          readProduct(plist[i]);
        }
        printf("\n");
      }

int selectDataNo(Product *p, int count){
 //제품의 번호를 선택하는 함수	
	int no;
        listProduct(p, count);
        printf("번호는 (취소: 0)?");
        scanf("%d", &no);
        return no;
	}

void saveData(Product *p, int count){
 //등록된 제품리스트를 파일에 저장
	FILE *fp;
	fp = fopen("product.txt", "wt");

	for(int i = 0; i < count; i++){
	if(p[i].weight == -1) continue;
	
  //  fprintf(fp, "%s ", p[i].name); 
    fprintf(fp, "%s %dg %d원 (10g당:%d원) %d점 \n",p[i].name,  p[i].weight, p[i].price, p[i].standPrice, p[i].star);
  	}fclose(fp);
  printf("저장됨!\n");
}

int loadData(Product *p){
 // 파일을 불러오는 함수
int count = 0;
  FILE *fp; //파일 포인터 생성

  fp = fopen("product.txt", "rt");//파일을 연다. 이미 만들어진 파일
  if(fp == NULL){ //파일이 없는 경우
    printf("=> 파일 없음\n");
    return 0;
  }
 
  for(;;count++){
   // 	fscanf(fp,"%s", p[count].name); 
	fscanf(fp, "%s %dg %d원 (10g당:%d원) %d점 \n",p[count].name, &p[count].weight, &p[count].price, &p[count].standPrice, &p[count].star);
    if(feof(fp)) break;
  }
  fclose(fp);
  printf("=> 로딩 성공\n");
  return count;
}
void searchName(Product *p, int count){ 
//제품을 검색하는 함수
  int scount = 0;
  char search[20];

  printf("검색할 이름은?\n");
  scanf("%s", search);

  printf("no name  weight  price  표준 가격  별점수\n");
  printf("*******************\n");
  for(int i = 0; i < count; i++){
    if(p[i].weight == -1) continue;
      if(strstr(p[i].name, search)){
        printf("%2d ", i+1);
        readProduct(p[i]);
        scount++;
      }
    }
  if(scount == 0) printf("=> 검색된 데이터 없음!");
  printf("\n");
}	
	


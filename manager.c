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

#include <stdio.h>
//#include "product.h"
#include "manager.h"

int selectMenu(){
    int menu;
    printf("\n*** Snack bar ***\n");
    printf("1. 제품조회\n");
    printf("2. 제품추가\n");
    printf("3. 제품수정\n");
    printf("4. 제품삭제\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    getchar();
    return menu;
}

void readProduct(Product p){
//1  로아커 초콜릿 라즈베리 요거트 55g 1980원 (10g당:360원) 5점
    printf("%s ", p.name); 
    printf("%dg %d원 (10g당:%d원) %d점 \n", p.weight, p.price, p.standPrice, p.star);
} //하나의 제품을 출력하는 함수

int main(void){
    Product plist[100];
    int curcount = 0;

//    Product p;
    int count = 0, menu;
 
#ifdef DEBUG
	printf("DEBUG: %s %s %s %d\n",__DATE__, __TIME__, __FILE__, __LINE__);
#endif
    while (1){
        menu = selectMenu();
        if (menu == 0) break;
	if (menu == 1) {
	 if (count > 0) listProduct(plist, curcount);
        }
        else if (menu == 2){
          count += addProduct(&plist[curcount++]);
        }
        else if (menu == 3){
	  int no = selectDataNo(plist, curcount);
	  if (no == 0){
	   printf("=>취소됨!\n");
	   continue;
	 }
	  getchar();
          updateProduct(&plist[no-1]);
        }
        else if (menu == 4){
	  int no = selectDataNo(plist, curcount);
	  int deleteok;
	  printf("정말로 삭제하시겠습니까?(삭제:1)\n");
	  scanf("%d", &deleteok);
	  if (deleteok == 1){
	    if(deleteProduct(&plist[no-1])) count--;
		}
        }
    }
    printf("종료됨!\n");
    return 0;
}

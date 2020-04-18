#include <stdio.h>
#include <string.h>

/*
-제품명
-중량(숫자)
-가격(숫자)
-표준가격
-별점수(1~5)
*/
typedef struct {
    char name[100];
    int weight;
    int price;
    int standPrice;
    int star;
} Product;

int addProduct(Product *p); //제품을 추가하는 함수
void readProduct(Product p); //하나의 제품을 출력하는 함수
int updateProduct(Product *p); //제품을 수정하는 함수
int deleteProduct(Product *p); //제품을 삭제하는 함수


#include "product.h"

int addProduct(Product *p){
printf("제품명은?");
  scanf("%[^\n]s", p->name); 
  printf("중량은?");
  scanf("%d", &p->weight);
  printf("가격은?");
  scanf("%d", &p->price);
  printf("표준가격은?");
  scanf("%d", &p->standPrice);
  printf("별점수는(1~5)?");
  scanf("%d", &p->star);
  printf("=> 추가됨!\n");
  return 1;
} //제품을 추가하는 함수

int updateProduct(Product *p){
  printf("제품명은?");
  scanf("%[^\n]s", p->name); 
  printf("중량은?");
  scanf("%d", &p->weight);
  printf("가격은?");
  scanf("%d", &p->price);
  printf("표준가격은?");
  scanf("%d", &p->standPrice);
  printf("별점수는(1~5)?");
  scanf("%d", &p->star);
  printf("=> 수정됨!\n");
  return 1;
} //제품을 수정하는 함수

int deleteProduct(Product *p){
  p->weight = -1;
  p->price = -1;
  p->standPrice = -1;
  p->star = -1;
  printf("=> 삭제됨!\n");
  return 1;
} //제품을 삭제하는 함수


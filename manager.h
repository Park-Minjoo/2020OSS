#include <stdio.h>
#include <string.h>
#include "product.h"

void listProduct(Product *plist, int count); //전체 제품의 리스트를 출력
int selectDataNo(Product *p, int count); //제품의 번호를 선택하는 함수
void saveData(Product *p, int count); //등록된 제품리스트를 파일에 저장
void saveData(Product *p, int count); //등록된 제품리스트를 파일에 저장
int loadData(Product *p); // 파일을 불러오는 함수

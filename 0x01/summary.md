# 요약
## 시간복잡도
얼마나 걸리는가
## 공간복잡도
얼마나 차지하는가
## 자료형
### 정수형
chat : 1byte  
short : 2byte  
int : 4byte(int 1.2억개 = 512MB)  
long long : 8byte 
넘어가면 오버플로~ 반대는 언더플로~
### 실수형
IEEE-754 format 으로 저장됨~  
float : 4byte  
double : 8byte  
#### 실수의 저장/연산 과정에서 반드시 오차가 발생할 수 밖에 없다!
#### double에 long long 범위의 정수를 함부로 담으면 안된다!
#### 실수를 비교할 때는 등호를 사용하면 안된다!
# 기초 코드 작성 요령 II - 요약
## STL과 함수 인자
call by value, call by reference  
구조체는 값이 복사됨
### vector
가변배열  
함수 인자로 넘어갈때는 call by value(구조체처럼~)
## 표준 입출력
공백 포함한 문자열 입력 : getline(cin, s)  
cin/cout 사용시 : ios::sync_with_stdio(0), cin.tie(0) 사용해야함  
### ios::sync_with_stdio(0)
cout, printf() 간의 동기화 비활성화 -> cin 이나 printf() 하나만 사용해야함
### cin.tie(0)
입력할때 버퍼를 거쳐 입력되는데, 채점에는 필요 없으니 비활성화 하는게 좋음
### 줄바꿈 문자 endl 사용하지 말기
줄바꿈 하고 출력 버퍼를 비우라는 명령인데, 버퍼를 비우라고 명령을 줄 필요가 없음. 그냥 '\n' 사용하자!
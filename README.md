# PPS Camp C++ week1
22100480 / 윤주안

## A001. Assign Cookies
![A001](./captures/A001.png)
각 아이 최대 1개 쿠키 지급 가능
아이 i g[i] : 만족도
쿠키 j s[j] : 크기
s[j] >= g[i] 일때 쿠키 지급 가능
예: 2 4 6 / 1 2 3 이면 1:1대응인 경우 output이 0이 되기에, 
각각 index를 지정, 아이의 만족도가 쿠키의 크기보다 작거나 같은경우를 성립하면 -> 둘다 index를 증가,
아이의 만족도가 더 크면 쿠키의 index만 증가시켜 다시 비교한다. 그리고 현재 만족한 아이의 명수를 반환. 

## A002. Pascal's Triangle
![A002](./captures/A002.png)
이중 벡터 vector<vector<int>>를 사용하고 있다. 
처음에 for(int i=0;i<numRows;++i) : 반복횟수를 지정.
vector<int>row(i+1, 1) : 해당 열을 생성, 초기값을 1로 고정.
row[j] = result[i-1][j-1] + result[i-1][j] : 처음과 끝원소를 제외한 중간값들은 파스칼 덧셈으로 구한다.
vector는 cout으로 바로 출력할 수 없기에 for반복문 사용.
문제에서 output이 ,로 이루어져 있음을 확인. 
처음에는, for(int num : row)이런식으로 하나씩 끄집어내서 출력하는 방식을 구사했는데 그러면 마지막 값뒤에 ","가 출력되서 마지막 원소를 확인해야했다. 
그렇기에 for(int i=0;i<row.size();++i)를 사용했고 i가 row.size()-1에 해당하는 경우 "," 없이 출력.
이번에는 마지막 row 뒤에 ","가 출력되는것을 확인했고 마지막 row를 확인해야했다.
for(auto it = m.begin(); it != m.end(); ++it)를 사용, m.end()-1에 해당하는 경우 ","없이 출력하도록 했다.

## A003. Plus One
![A003](./captures/A003.png)

## A004. 나누어 떨어지는 숫자 배열
![A004](./captures/A004.png)


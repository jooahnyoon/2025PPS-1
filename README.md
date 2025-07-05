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
input형태가 [1,2,3]이런 구조라서, 일단 getline(cin, line)으로 전체를 string으로 읽어들이고 
그중에서 숫자만 뽑아서 int로 변형해서 g.push_back(n);을 한다. 
원래는 string 123을 int 123로 만든후 +1을 하고 그냥 124를 [1,2,4]의 형태로 바꾸는 간단한 방식을 생각했으나,
문제에서 사용하는 함수는 vector<int>digits을 인자로 받고 있기에, vector<int>g자체를 인자로 전달하는 방식으로 구현해야됨을 깨달았다. 
맨 뒤의 자리부터 확인하기에 for문에서 i는 digits.size()-1부터 시작하도록 했고, 
만약 한번이라도 9보다 작은 수가 나오면 +1을 하고 바로 return하도록 했다. 그렇지 않은 경우 즉 숫자가 9인경우에는 
계속해서 현재 값을 0으로 바꾸고 앞의 자리를 확인하도록 했다. 만약 모두 9가 입력된 숫자라서 for반복문을 
빠져나온 경우에는 digits.insert(digits.begin(),1);을 사용해서 맨 앞에 1을 추가하도록 구현했다.  

## A004. 나누어 떨어지는 숫자 배열
![A004](./captures/A004.png)
[10,45,39] 이런식으로 입력이 받았다고 했을때, [ , ] 이 3가지를 모두 공백으로 변환하고,
istringstream으로 공백을 처리하여 숫자만 int로 변환하여 vector <int> g에 push_back한다.
solution 함수에 g를 인자로 받고, 처음부터 끝까지 하나씩 divisor로 나눴을때 0으로 나눠떨어지는지를 판별, 
해당하는 경우에 answer.push_back를 한다. for반복문이 끝난후에는 empty인지를 판별하여 해당하는 경우 -1를 push_back한다. 
그리고 처음부터 끝까지를 sort한다. 

## A005. 스킬트리 
![A005](./captures/A005.png)
skill와 skill_trees를 입력받고, 
solution 함수에서 각각의 skill_trees를 하나씩 꺼내서 skill와 비교,
skill_trees[i]에서 문자 한개씩 꺼내서 skill안에 들어있는지 skill.find(c)를 이용해 찾기 
찾은 경우에 string find에 추가한다. 
마지막으로 처음부터 find의 size까지의 문자가 동일한지 판별
같은 경우에 answer를 +1한다. 

## A006. 문자열 내 p와 y의 개수
![A006](./captures/A006.png)
main에서는 string을 입력받고 각각의 값이 p P y Y에 해당하는 경우
string s에 소문자로 바꿔서 추가한다. 
solution 메서드에서는 count를 0으로 초기화하고, 
s의 각 문자가 p인 경우 count를 +1 y인경우 -1하여 
count값이 0이 되는 경우에 p, y의 갯수가 같음을 의미하기에 
true(1)를 반환, 그외의 경우 false(0)을 반환한다. 

## A007. 음계 판별하기
![A007](./captures/A007.png)
main에서 배열 8자리를 입력받는다. 
solution 메서드에서 8자리를 판별할때 asc, des 두가지를 사용한다.
index 1부터 시작해서, 현재 값이 이전 array 값보다 크면 asc를 +1하고, 작으면 des +1한다.
asc = 7이면 오름차순정렬이기에 ascending반환, des = 7이면 내림차순정렬이기에 descending반환
그외의 경우 mixed를 반환한다. 
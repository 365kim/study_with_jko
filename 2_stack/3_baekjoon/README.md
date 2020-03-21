## 10828번 [스택](https://www.acmicpc.net/problem/10828)
> 1회 : 성공
- 배열을 이용한 스택으로 구현
- 사용한 연산 : init, push, pop, peek, size, is_empty
- 명령어가 push 등 5가지 뿐이라 명령어 첫 글자 등을 단순비교하여 조건문을 작성하였다.
- push 명령어만을 사용하는 경우에도 스택의 크기는 첫째 줄에 입력되는 명령의 수를 넘어가지 않기 때문에, 이 숫자를 스택의 최대 크기로 설정하였다.

## 10773번 [제로](https://www.acmicpc.net/problem/10773)
> 1회 :  성공
- 배열을 이용한 스택으로 구현
- 사용한 연산 : init, push, pop, sum

## 9012번 [괄호](https://www.acmicpc.net/problem/9012)
> 1회 :  성공
- 배열을 이용한 스택으로 구현
- 사용한 연산 : init, push, pop
- 왼괄호'('를 만나면 push 연산을, 오른괄호 ')'를 만나면 pop연산을 수행하여 괄호의 짝이 맞는지 확인하도록 하였다.

## 4949번 [균형잡힌 세상](https://www.acmicpc.net/problem/4949)
> 1회 : 실패 <br>
> 2회 : 실패 <br>
> 3회 : 메모리 초과 <br>
> 4회 : 실패 <br>
> 5회 : (시도 중)
- 연결리스트를 이용한 스택으로 구현
- 성공하고 나서 업데이트...

## 1874번 [스택 수열](https://www.acmicpc.net/problem/1874)
> 1회 :  성공
- 배열을 이용한 스택으로 구현
- 사용한 연산 : push, pop
- 구글링해서 stack을 간단하게 구현하는 법을 적용해보았다. push는 2줄, pop은 4줄로 구현할 수 있음을 확인했다.
- 알고리즘테스트에서는 동적할당 보다는 전역변수를 선언한다는 얘기를 듣고 문제에서 주어진 최대값만큼 전역변수로 선언해보았다.
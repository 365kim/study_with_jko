## [10866번](https://www.acmicpc.net/problem/10866) 덱
> 1회 : [성공](./baekjoon_10866_deque.c)
- 배열을 이용한 덱으로 구현
- 사용한 연산 : `push_front`, `push_back`, `pop_front`, `pop_back`, `size`, `empty`, `front`, `back`
- 스택(10828번)문제와 큐(18258번)문제와 유사하게 입력되는 몇 가지 명령을 처리하는 문제.
- 전역변수에 문제에서 주어진 최대크기의 두배로 배열 선언 후 정중앙에서부터 인덱스를 사용하여 앞뒤 모두 데이터 추가 가능하도록 구현.
<br>

## [1021번](https://www.acmicpc.net/problem/1021) 회전하는 덱
> 1회 : 실패(10866번 코드를 잘못 복사제출) <br>
> 2회 : 성공<br>
> 3회 : [성공](./baekjoon_01021_rotating_queue.c)
- 배열을 이용한 덱으로 구현
- 사용한 연산 : `pop_back_push_front`, `pop_front_push_back`
- 문제 조건에서 pop_back 연산은 항상 push_front와, pop_front 연산은 항상 push_back과 함께 일어나서 각각 하나의 함수에 묶어서 구현
- 배열을 사용하더라도 push pop을 반복하다보면 찾고자하는 값을 임의탐색할 수 없어져서 최소 루트를 일일이 구해서 비교함
- 2회에서 제출한 코드에 오버플로우 발생하는 [이슈](github.com/365kim/algorithm_study/issues/1)에 대해 덱사이즈를 재설정하여 해결
<br>

## [5430번](https://www.acmicpc.net/problem/5430) AC
> 1회 : 실패 <br>
> 2회 : 실패 <br>
> 3회 : 실패 <br>
> 4회 : 런타임에러 <br>
> 5회 : 런타임에러 <br>
> 6회 : [성공](./baekjoon_05430_AC.c)
- 사용한 연산 : `reverse`, `delete`
- (문제1) 덱의 모든 요소를 삭제했을 경우에 임의의 요소가 출력되어버림 *(i.e. 입력 DD 2 [1,2] / 출력 [3])*
    - 프린트 형식(조건문)을 수정하여 보완
- (문제2) 입력받는 배열의 요소가 두 자리 이상일 경우에도 한 자리만 저장됨 *(i.e. 입력 [42] / 출력 [4])*
    - atoi함수와 "[,]"을 기준으로 문자열을 token으로 쪼개주는 strtok함수로 보완
- (문제3) 배열에 할당된 크기를 넘어서 접근해서 런타임에러 발생
    - 배열크기를 초기 설정값 대비 두배로 증가시킴
<br>

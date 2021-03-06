## 3. Queue
- 한쪽에서는 데이터 삽입만 반대쪽에서는 데이터 삭제만 일어나는 자료구조
- queue는 '일렬로 늘어선 사람들로 이루어진 줄'을 의미함
- 선입선출(FIFO First-In First Out) 원칙을 따름
- 배열 또는 [연결리스트](./../1_linked_list)로 구현 가능
- `enqueue` : 데이터 삽입연산, `dequeue` : 데이터 삭제연산
- `front` : 큐의 맨 앞, `rear` : 큐의 맨 뒤
- `getfront` : peek연산

### [3.1.](./1_queue_using_array) **Queue using Array**
- **장점** : 구현이 쉬움
- **단점** : 미리 정해둔 최대크기 제한으로 queue overflow가 발생할 수 있음<br>
rear가 큐의 끝에 도달할 경우 큐에 빈 메모리가 남아있는데도 꽉 차있는 것으로 판단해버림 <br>
이를 방지하기 위해 dequeue 시 배열을 전체적으로 한 칸씩 앞당기는 과정을 추가하게 되는데 역시 비효율적임

### [3.2.](./2_queue_using_linked_list) **Queue using Linked List**
- **장점** : 큐의 크기에 제한이 없고 삽입, 삭제가 용이함
- **단점** : 구현이 배열보다 어려움

## 생각해보기
:speech_balloon: **큐와 스택의 차이**
- 큐와 스택의 차이는 삭제연산에 있음
- 큐는 가장 ***먼저*** 삽입된 데이터가 삭제되고, 스택은 가장 ***나중에*** 삽입된 데이터가 삭제됨
- 스택은 먼저 들어온 것이 후순위가 되므로 우선순위 관련 문제가 생길 수 있고, 아주 초기에 들어온 데이터가 오랫동안 잔류하게 될 수도 있음

:speech_balloon: **큐가 사용되는 상황**
- 운영체제의 작업 큐(버퍼 큐, 스케줄링 큐), 프린터의 출력, 시스템설계를 위한 대기행렬 모델링
- 일상 : 일방통행도로 은행의 번호표 시스템, 편의점/마켓의 제품진열법

:speech_balloon: **배열로 큐를 효율성 있게 구현하려면?**
- **원형큐** 로 구현

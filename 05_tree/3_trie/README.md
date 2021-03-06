## Trie
- __트라이__ : 문자열 검색에 특화된 트리형 자료구조
    - 검색과정의 문자열들이 검색하고자 하는 문자열의 접두사이기 때문에 __접두사 트리__ _(Prefix Tree)_ 라고도 불림
    - "tree"의 검색과정 : t → tr → tre → tree
- __장점__ : 시간복잡도 O(M) (M: 검색어의 최대길이)
- __단점__ : 공간복잡도가 높음. 예를 들어 알파벳을 저장한다면 각 노드에 26개의 공간이 필요
- `finish` : 해당 노드에서 끝나는 문자열이 있는지 확인하는 용도의 bool 타입 변수
<br>

## Nadarm's Exercise
- [예제 원본](https://github.com/nadarm/42-algorithm/tree/master/tree/trie)

#### 트라이 할당/해제
- 관련예제 : [init](./trie_init.c), [free](./free_trie.c)

#### 참조연산
- 관련예제 : [find](./trie_find.c)

#### 삽입연산
- 관련예제 : [insert](./trie_insert.c)
<br>

[맨 위로](#trie)

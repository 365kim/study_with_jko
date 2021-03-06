## 6. Sort
- 무작위로 나열된 데이터를 사용자가 정한 기준에 맞게 정렬하는 알고리즘
- 효율적인 정렬은 다른 알고리즘을 최적화하는데 중요한 역할을 함
- 정렬의 종류
    - __단순정렬__ 　 　　 : 삽입정렬 _(insertion)_, 선택정렬 _(selection)_
    - __버블정렬 및 변종__ : [__버블정렬__ _(bubble)_](./1_bubble_sort), 빗질정렬 _(comb)_
    - __효율적인 정렬__ 　 : [__힙정렬__ _(heap)_](./2_heap_sort), [__퀵정렬__ _(quick)_](./3_quick_sort), [__병합정렬__ _(merge)_](./4_merge_sort), 셸정렬 _(shell)_
    - __분산정렬__ 　 　　 : 기수정렬 _(radix)_, 계수정렬 _(counting)_, 버킷정렬 _(bucket)_ 등
<br>

## 생각해보기

:speech_balloon: ***stable sort, unstable sort란?***
- __안정 정렬__ _(stable sort)_
    - 정렬 후에, 같은 키값을 가지는 원소들끼리 정렬 전의 순서가 유지되는 정렬
    - 삽입정렬, 버블정렬, 병합정렬, 기수정렬, 계수정렬
- __불안정 정렬__ _(unstable sort)_
    - 정렬 후에, 같은 키값을 가지는 원소들끼리 정렬 전의 순서가 보장되지 않는 정렬
    - 선택정렬, 힙정렬, 퀵정렬, 쉘정렬
<br>

:speech_balloon: ***radix sort, counting sort란?***
- __기수정렬__ _(radix sort)_
    - 낮은 자리수부터 비교하여 정렬하는 알고리즘
- __계수정렬__ _(counting sort)_
    - 원소가 몇 번 등장하는지 세어서 정렬하는 알고리즘
- 기수정렬과 계수정렬 모두 원소의 값을 명시적으로 비교하지 않고도 정렬을 수행함
- comparision-sort의 시간복잡도는 하한이 O(nlogn)인 것에 반해, 기수정렬과 계수정렬은 시간복잡도를 O(n)으로 낮출 수 있음
<br>


:speech_balloon: ***quick sort가 최악의 시간복잡도를 가지는 경우는? 그리고 그걸 방지하기 위한 방법은?***
- 최악의 경우
    - 리스트가 오름차순으로 이미 정렬되어있고 맨 앞의 요소를 pivot으로 설정한다면, 한 번의 퀵정렬을 마치고 pivot 값을 기준으로 분할된 두 리스트 중 왼쪽의 리스트는 항상 비어있게 됨
    - 분할정복의 이점을 활용하지 못하고 n개의 원소를 n번 반복적으로 탐색하면서 O(N²)의 시간복잡도를 갖게됨
    - 내림차순으로 정렬되어있거나 맨 뒤의 요소를 pivot을 설정하는 경우도 마찬가지
- 이를 방지하기 위한 방법
    - `randomized quick sort` : pivot을 무작위로 뽑아서 설정하는 방법(average)으로 시간복잡도 O(NlogN)의 성능을 가질 수 있음
    - 리스트의 중간값을 pivot으로 설정하는 방법(best)도 있지만, 중간값을 구하기 위한 탐색이 추가적으로 필요
<br>

:speech_balloon: ***어떤 정렬 알고리즘이 가장 빠를까?***
- 알고리즘 종류별 시간복잡도

  |No|　　종　류　　|Best<br>　(최선의 경우)　|Average<br>(일반적인 경우)|Worst<br>　(최악의 경우)　|　　　비　고　　　|
  |---|:---|:---:|:---:|:---:|:---:|
  |1|　__삽입정렬__|O(N)|O(N²)|O(N²)| _stable_ |
  |2|　__선택정렬__|O(N²)|O(N²)|O(N²)| _unstable_ |
  |3|　__버블정렬__|O(N²)|O(N²)|O(N²)| _stable_ |
  |4|　__힙정렬__　|O(NlogN)|O(NlogN)|O(NlogN)| _unstable_ |
  |5|　__퀵정렬__　|O(NlogN)|O(NlogN)|O(N²)| _unstable_ |
  |6|　__병합정렬__|O(NlogN)|O(NlogN)|O(NlogN)| _stable_ |
  |7|　__쉘정렬__　|O(N)|O(N¹·³)|O(N²)| unstable |
  |8|　__기수정렬__|O(N)|O(N)|O(N)| :+1: _stable_ |
  |9|　__계수정렬__|O(N)|O(N)|O(N)| :+1: _stable_ |

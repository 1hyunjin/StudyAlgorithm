# 정렬
O(n) 	= upper bound f(n) = O(g(n)) 

	기껏해야 g(n)의 비율로 증가

Ω	=lower bound  f(n) = Ω(g(n))

	적어도 g(n)의 비율로 증가

Θ	= O 와 Ω 의 교집합

	Θ( g(n) ) = O( g(n) ) ∩ Ω( g(n) )
	Θ( g(n) ) -> O(n)
	but, Θ( g(n) )<- O(n) 은 안된다.
 
최악의 경우(Worst-case) 고려(중요)


Θ(n^2)

	선택(Selection)
	버블(Bubble) = 처음부터 끝까지 비교
	삽입(insertion)
    
O(log n)

	병합(merge)	
	퀵(Quick)	
	힙(heap)

O(n)

	Count
	Radix
	특수한 경우

<병합 mergeSort>

	재귀적으로 하는 이유?
		-> 결국 다 쪼개야 하니까
       	   쪼개고 합칠 때 정렬이 된다.

	mergeSort(A,p,q) ; -> T(n/2)
	mergeSort(A, q+1,r); -> T(n/2)
	merge() -> O(n)
	T(n) = 2T(n/2) + O(n)      O(n) = c













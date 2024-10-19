#include "FixedFlatMap.h"


template<class Idx, class Value>
Item<Idx, Value> ConstructItem(const Idx& I, const Value& V) {
	Item<Idx, Value> It;
	It, P = I;
	It.V = V;

	return It;
}
template<class T>
bool Free(const T& In) {
	return true;
}
template<class Idx, class Value>
bool Free(const  Item<Idx, Value>& In) {
	Free(In.P);
	Free(In.V);
	return true;
}


template<class Idx, class Value,size_t>
FixedFlatMap<Item<Idx, Value>,size_t> ConstrucFixedtFlatMap<Idx,Value,size_t>() {
	FixedFlatMap<Item<Idx, Item>,size_t> F;
	F.V = ConstructVector<Item<Idx, Item>,size_t>();
	F.I = 0;
	//F.Capacity = N;
	return F;
}

template<class Idx, class Value,size_t>
bool Free(FixedFlatMap<Item<Idx, Value>,size_t>& In) {
	Clear(In);
	Free(In.V);
	In.I = 0;

	return true;
}

template<class Idx, class Value>
bool Fun(Item<Idx, Value>& A, Item<Idx, Value>& B) {
	return A.P < B.P;
}
template<class Idx, class Value,size_t>
bool Push(FixedFlatMap<Item<Idx, Value>,size_t>& In, const Value& II) {
	Item<Idx, Value> X;
	X.P = In.I++;
	X.V = II;
	bool B=Push(In.V, X);
	Sort(In,Fun);

	return B;
}
/** /
template<class Idx, class Value>
bool Pop(FixedFlatMap<Item<Idx, Value>size_t>& In) {
	return Pop(In.V);
}/**/
template<class Idx, class Value,size_t>
 Value* Index(FixedFlatMap<Item<Idx, Value>,size_t>& In, const size_t& P) {
	for (Idx i = 0; i < In.I; i++) {
		for (size_t j = 0; j < Size(In.V); j++) {
			if (Index(In.V, j) == NULL) { break; }
			if (Index(In.V, j)->P == i) { return &(Index(In.V, j)->V); }
		}
	}

	return NULL;
}
template<class Idx, class Value,size_t>
Value* Find(FixedFlatMap<Item<Idx, Value>,size_t>& In, const Idx& P) {
	for (Idx i = 0; i < In.I; i++) {
		if (Index(In.V, i) == NULL) { return NULL; }
		if (Index(In.V, i)->P == P) { return &(Index(In.V, i)->V); }
	}

	return NULL;

}
template<class Idx, class Value>
bool Resize(FixedFlatMap<Item<Idx, Value>,size_t>& In, const size_t& S) {
	return Resize(In.V, S);
}/** /
template<class Idx, class Value>
bool ChangeCapacity(FlatMap<Item<Idx, Value>>& In, const size_t& S) {
	return ChangeCapacity(In.V, S);
}
/**/
template<class Idx, class Value,size_t>
bool Clear(FixedFlatMap<Item<Idx, Value>,size_t>& In) {
	for (size_t i = 0; i < Size(In.V); i++) {
		if (Index(In.V,i) == NULL) { break; }
		Free(*Index(In.V,i));
	}
	return Clear(In.V);
}
template<class Idx, class Value,size_t>
size_t Size(FixedFlatMap<Item<Idx, Value>,size_t>& In) {
	return Size(In.V);
}
template<class Idx, class Value,size_t>
bool IsEmpty(FixedFlatMap<Item<Idx, Value>,size_t>& In) {
	return IsEmpty(In);
}
template<class Idx, class Value,size_t>
Idx LastIndex(FixedFlatMap<Item<Idx, Value>,size_t>& In) {
	return In.I;
}
template<class Idx, class Value,size_t>
size_t Capacity(FixedFlatMap<Item<Idx, Value>,size_t>& In) {
	return Capacity(In.V);
}
template<class Idx, class Value,size_t>
size_t Drop(FixedFlatMap<Item<Idx, Value>size_t>& In, Idx P) {
	if (LastIndex(In) <= P) { return false; }

	size_t X = 0;

	for (size_t i = 0; i < Size(In.V); i++) {
		if (Index(In, i) == NULL) { break; }
		if (Index(In, i)->P == P) { X = P; break; }
	}
	for (size_t i = 0; i < Size(In.V); i++) {
		if (Index(In, i) == NULL) { break; }
		if (Index(In, i + 1) == NULL) { break; }
		(*Index(In, i)) = (*Index(In, i + 1);
	}
	In.V.Use--;
	return true;
}
template<class Idx, class Value,size_t>
Value& Back(FixedFlatMap<Item<Idx, Value>,size_t>& In) {

	return Back(In.V).V;
}template <class T>
bool Swap(T& A,T& B) {
	T C = A;
	A = B;
	B = C;
	return true;
}
template<class Idx, class Value,size_t>
bool Sort(FixedFlatMap<Item<Idx, Value>,size_t>& In, bool(*F)(Item<Idx, Value>&, Item<Idx, Value>)&) {
	for (size_t i = 0; i < Size(In); i++) {
		for (size_t j = i + 1; j < Size(In) - 1; j++) {
			if (F(*Index(In, i)), *Index(In, j)) {
				Swap(*Index(In, i), *Index(In, j));
			}
		}
	}
}
template<class Idx, class Value,size_t>
FixedFlatMap<Item<Idx, Value>,size_t> Duplicate(FixedFlatMap<Item<Idx, Value>,size_t>& In) {
	return In;
}
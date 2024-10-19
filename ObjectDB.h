#pragma once
#include <stdio.h>
#include <stdint.h>

#include "FixedString.h"
#include "SharedPointer.h"
#include "Any.h"
#include "FixedFlatMap.h"

struct Person {
	FixedUTF8<32> S;
	size_t Age = 0;
	bool IsMan = false;

};
template<class T>
struct Arrow {
	SharedPointer<T> Arrow;
	intmax_t Weight = 0;
};

template<class T, size_t Ar, size_t FMap, size_t FVec>
struct Portrait {
	SharedPointer<T> P;
	FixedVector<Arrow<T>, Ar> Arrow;
	FixedFlatMap<Any, Any, FMap> Map;
	FixedVector<Any, FVec> Vector;
	Any Iiwake;
};
static const size_t A = 20;
static const size_t M = 40;
static const size_t V = 40;
typedef Portrait<Person, A, M, V> Port;

template<class P>
struct ObjectDB {
	Vector<P> V;
	Any Label;
	Any Iiawke;
};
template<class P, size_t N>
struct FixedObjectDB {
	FixedVector<P, N> V;
	Any Label;
	Any Iiawke;
};
template<class Idx, class P>
struct ObjectDBF {
	FlatMap<Idx, P> M;
	Any Label;
	Any Iiawke;
};
template<class Idx, class P, size_t N>
struct FixedObjectDBF {
	FixedFlatMap<Idx, P, N> M;
	Any Label;
	Any Iiawke;
};
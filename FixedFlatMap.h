#pragma once

#include <stdio.h>

#include "FixedFlatMap.h"

template<class Index, class Value>
struct Item {
	Index P = 0;
	Value V = 0;
};

template<class Idx, class Value,size_t N>
struct FixedFlatMap {
	FixedVector<Item<Idx, Value>> V;
	Idx I = 0;
	size_t Capacity = N;
};

template<class Idx, class Value,size_t N> Item<Idx, Value> ConstructItem(const Idx& I, const Value& V);
template<class Idx, class Value,size_t N> FixedFlatMap<Item<Idx, Value>,size_t> ConstructFlatFlatMap<Idx,Value,size_t>();
template<class Idx, class Value,size_t N> bool Free(FixedFlatMap<Item<Idx, Value>,size_t& In);
template<class Idx, class Value,size_t N> bool Push(FixedFlatMap<Item<Idx, Value>,size_t>& In, const Value& II);
//template<class Idx, class Value,size_t N> bool Pop(FixedFlatMap<Item<Idx, Value>,size_t>& In);
template<class Idx, class Value,size_t N> Value* Index(FixedFlatMap<Item<Idx, Value>,size_t>& In, const size_t& P);
template<class Idx, class Value,size_t N> Value* Find(FixedFlatMap<Item<Idx, Value>,size_t>& In, const Idx& P);
template<class Idx, class Value,size_t N> bool ResizeFixed(FlatMap<Item<Idx, Value>,size_t>& In, const size_t& S);
//template<class Idx, class Value,size_t N> bool ChangeCapacity(FixedFlatMap<Item<Idx, Value>,size_t>& In, const size_t& S);
template<class Idx, class Value,size_t N> bool Clear(FixedFlatMap<Item<Idx, Value>,size_t>& In);
template<class Idx, class Value,size_t N> size_t Size(FixedFlatMap<Item<Idx, Value>,size_t>& In);
template<class Idx, class Value,size_t N> Idx LastIndex(FixedFlatMap<Item<Idx, Value>,size_t>& In);
template<class Idx, class Value,size_t N> size_t Capacity(FixedFlatMap<Item<Idx, Value>,size_t>& In);
template<class Idx, class Value,size_t N> size_t Drop(FixedFlatMap<Item<Idx, Value>,size_t>& In, Idx P);
template<class Idx, class Value,size_t N> Value& Back(FixedFlatMap<Item<Idx, Value>,size_t>& In);
template<class Idx, class Value,size_t N> FixedFlatMap<Item<Idx, Value>,size_t> Duplicate(FixedFlatMap<Item<Idx, Value>,size_t>& In);
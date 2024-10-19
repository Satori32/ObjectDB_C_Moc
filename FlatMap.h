#pragma once

#include <stdio.h>

#include "Vector.h"

template<class Index, class Value>
struct Item {
	Index P = 0;
	Value V = 0;
};

template<class Idx, class Value>
struct FlatMap {
	Vector<Item<Idx, Value>> V;
	Idx I = 0;
};

template<class Idx, class Value> Item<Idx, Value> ConstructItem(const Idx& I, const Value& V);
template<class Idx, class Value> FlatMap<Item<Idx, Value>> ConstructFlatMap(size_t Capacity);
template<class Idx, class Value> bool Free(FlatMap<Item<Idx, Value>>& In);
template<class Idx, class Value> bool Push(FlatMap<Item<Idx, Value>>& In, const Value& II);
template<class Idx, class Value> bool Pop(FlatMap<Item<Idx, Value>>& In);
template<class Idx, class Value> Value* Index(FlatMap<Item<Idx, Value>>& In, const size_t& P);
template<class Idx, class Value> Value* Find(FlatMap<Item<Idx, Value>>& In, const Idx& P);
template<class Idx, class Value> bool Resize(FlatMap<Item<Idx, Value>>& In, const size_t& S);
template<class Idx, class Value> bool ChangeCapacity(FlatMap<Item<Idx, Value>>& In, const size_t& S);
template<class Idx, class Value> bool Clear(FlatMap<Item<Idx, Value>>& In);
template<class Idx, class Value> size_t Size(FlatMap<Item<Idx, Value>>& In);
template<class Idx, class Value> Idx LastIndex(FlatMap<Item<Idx, Value>>& In);
template<class Idx, class Value> size_t Capacity(FlatMap<Item<Idx, Value>>& In);
template<class Idx, class Value> size_t Drop(FlatMap<Item<Idx, Value>>& In, Idx P);
template<class Idx, class Value> Value& Back(FlatMap<Item<Idx, Value>>& In);
template<class Idx, class Value> FlatMap<Item<Idx, Value>> Duplicate(FlatMap<Item<Idx, Value>> In);
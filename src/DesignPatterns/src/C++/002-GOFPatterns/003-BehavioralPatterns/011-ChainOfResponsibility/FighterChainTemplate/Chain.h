#pragma once

#include <memory>

template <typename T>
class Chain {
public:
	explicit Chain(std::shared_ptr<T> e)
		: entity{ e } {}
public:
	void AddChain(Chain *cc);
	void SetChain(Chain *cc);
	virtual void Handle() = 0;
protected:
	Chain *next{nullptr};
	std::shared_ptr<T> entity;
};

template <typename T>
void Chain<T>::AddChain(Chain *cc)
{
	if (next != nullptr)
		next->AddChain(cc);
	else
		next = cc;
}

template <typename T>
void Chain<T>::SetChain(Chain *cc)
{
	next = cc;
}

template <typename T>
void Chain<T>::Handle()
{
	if (next != nullptr)
		next->Handle();
}




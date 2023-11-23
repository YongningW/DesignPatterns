#include "concretesubject.h"

namespace ObserverPattern
{
	ConcreteSubject::ConcreteSubject() :m_state(0)
	{
	}

	ConcreteSubject::~ConcreteSubject()
	{
	}

	int ConcreteSubject::getState()
	{
		return m_state;
	}

	void ConcreteSubject::setState(int val)
	{
		m_state = val;
	}
}


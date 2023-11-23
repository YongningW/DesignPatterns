#pragma once
#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include <list>

namespace ObserverPattern 
{
	//class Observer;

	class Subject
	{
	public:
		Subject();
		virtual ~Subject();
		void attach(Observer* obs);
		void detach(Observer* obs);
		void notify();

		virtual void setState(int val) = 0;
		virtual int getState() = 0;

	private:
		std::list<Observer*> m_observers;
	};
}

#endif // !SUBJECT_H

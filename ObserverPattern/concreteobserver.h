#pragma once
#ifndef CONCRETEOBS_H
#define CONCRETEOBS_H

#include "observer.h"

#include <string>

namespace ObserverPattern
{
	class ConcreteObserver :public Observer
	{
	public:
		explicit ConcreteObserver(std::string name);
		~ConcreteObserver();

		void update(ObserverPattern::Subject* sub) override;

	private:
		std::string m_name;
		int m_observerState;
	};
}
#endif // !CONCRETEOBS_H

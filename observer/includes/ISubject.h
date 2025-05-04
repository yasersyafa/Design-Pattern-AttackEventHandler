// Interface subject. Player can extend this interface to add more functionality and behave like a subject
#ifndef ISUBJECT_H
#define ISUBJECT_H

#include "IObserver.h"

class ISubject {
    public:
        virtual ~ISubject() = default;
        virtual void attach(IObserver* observer) = 0;
        virtual void remove(IObserver* observer) = 0;
        virtual void notify() = 0;
};

#endif
// Interface subject. Player can extend this interface to add more functionality and behave like a subject
#ifndef ISUBJECT_H
#define ISUBJECT_H
#include "IObserver.h"

template <typename T> //generics
class ISubject {
    public:
        virtual ~ISubject() = default;
        virtual void attach(IObserver<T>* observer) = 0;
        virtual void detach(IObserver<T>* observer) = 0;
        virtual void notify() = 0;
};

#endif
// Interface observer
#ifndef IOBSERVER_H
#define IOBSERVER_H

template <typename T> //generics observer
class IObserver {
    public:
        virtual ~IObserver() = default;
        virtual void update(T* subject) = 0;
};

#endif
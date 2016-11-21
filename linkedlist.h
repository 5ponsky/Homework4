#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {
public:
    bool isEmpty() const;
    void clear();
    reference back();
    const_reference back() const;
    reference front();
    const_reference front() const;

};


#endif // LINKEDLIST_H

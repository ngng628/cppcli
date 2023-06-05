# pragma once 

class range
{
public:
    range(int start,int cnt):index_(start),max_(start+cnt) {}
    range(int cnt) : range(0, cnt) {}
    int operator *(){ return index_; }
    void operator ++() { ++index_; }
    bool operator != ( range& ){ return index_ < max_; }
    range begin() const { return *this; }
    range end() const { return *this; }
private:
    int index_;
    int max_;
};


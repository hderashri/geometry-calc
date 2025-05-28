#ifndef ISHAPE_H
#define ISHAPE_H

class IShape {
public:
    virtual ~IShape() = default;
    virtual void input() = 0;
    virtual void print() const = 0;
};

#endif // ISHAPE_H

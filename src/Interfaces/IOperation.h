#ifndef IOPERATION_H
#define IOPERATION_H

class IOperation {
public:
    virtual ~IOperation() = default;
    virtual void execute() = 0;
};

#endif // IOPERATION_H

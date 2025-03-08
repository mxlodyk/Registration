#ifndef REGISTRATION_RESULT_H
#define REGISTRATION_RESULT_H

#import "unit.h"

class Result {
public:
    const Unit GetUnit() const;
    void SetUnit(Unit newUnit);

    const float GetMark() const;
    void SetMark(float newMark);

private:
    Unit unit;
    float mark;
};

inline const Unit Result::GetUnit() const {
    return unit;
}

inline void Result::SetUnit(Unit newUnit) {
    unit = newUnit;
}

inline const float Result::GetMark() const {
    return mark;
}

inline void Result::SetMark(float newMark) {
    mark = newMark;
}

#endif

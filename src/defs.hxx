#pragma once

enum GenException = {
    EXCEPTION_NULL=0,
    EXCEPTION_FATAL_AMBIGUOUS=1,
    EXCEPTION_AMBIGUOUS=2
};

inline bool exceptionIsFatal(GenException const e) { return e && e%2==0; };
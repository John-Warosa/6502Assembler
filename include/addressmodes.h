#ifndef ADDRESSMODES_H
#define ADDRESSMODES_H


typedef enum {
    INVALID,
    ACCUMULATOR,
    ABSOLUTE,
    ABSOLUTE_X,
    ABSOLUTE_Y,
    IMMEDIATE,
    IMPLIED,
    X_INDIRECT,
    INDIRECT_Y,
    ZEROPAGE,
    ZEROPAGE_X,
    ZEROPAGE_Y,
} AddressMode;


#endif //ADDRESSMODES_H

/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CATransform3D {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
};

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct SUGradientPoint {
    struct CGPoint point;
    float radius;
};

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int localIndex;
    unsigned int localCount;
    unsigned int globalIndex;
    unsigned int globalCount;
} CDStruct_b08558f4;

typedef struct {
    int version;
    void *retain;
    void *release;
    void *copyDescription;
    void *equal;
    void *hash;
} CDStruct_1d20123b;

typedef struct {
    int version;
    void *info;
    void *retain;
    void *release;
    void *copyDescription;
} CDStruct_304912e7;

typedef struct {
    id _field1;
    int _field2;
    int _field3;
    struct UIEdgeInsets _field4;
    id _field5;
    id _field6;
} CDStruct_71500f42;


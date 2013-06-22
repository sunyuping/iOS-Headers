/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSSQLCorrelation, NSSQLRow;

@interface NSSQLAdapterOperation : NSObject
{
    unsigned int _adapterOperator;
    NSSQLRow *_row;
    NSSQLCorrelation *_correlation;
}

- (id)initWithAdapterOperator:(unsigned int)arg1 row:(id)arg2;
- (id)initWithAdapterOperator:(unsigned int)arg1 correlation:(id)arg2;
- (void)dealloc;
- (unsigned int)adapterOperator;
- (void)setAdapterOperator:(unsigned int)arg1;
- (id)entity;
- (id)correlation;
- (id)row;
- (int)compareAdapterOperation:(id)arg1;
- (id)_opString;
- (id)description;

@end


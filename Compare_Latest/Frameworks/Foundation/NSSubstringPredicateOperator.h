/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSStringPredicateOperator.h>

@interface NSSubstringPredicateOperator : NSStringPredicateOperator
{
    unsigned int _position;
}

- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)symbol;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)position;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 variant:(unsigned int)arg3 position:(unsigned int)arg4;
- (SEL)selector;

@end


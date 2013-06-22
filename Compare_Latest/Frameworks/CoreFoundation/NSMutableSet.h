/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSSet.h>

@interface NSMutableSet : NSSet
{
}

+ (id)setWithCapacity:(unsigned int)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned int)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)unionSet:(id)arg1;
- (void)unionOrderedSet:(id)arg1;
- (void)setSet:(id)arg1;
- (void)setOrderedSet:(id)arg1;
- (void)setArray:(id)arg1;
- (void)setObject:(id)arg1;
- (void)replaceObject:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1;
- (void)removeObjectsInOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsInArray:(id)arg1 range:(struct _NSRange)arg2;
- (void)removeAllObjects;
- (void)minusSet:(id)arg1;
- (void)minusOrderedSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)intersectOrderedSet:(id)arg1;
- (void)addObjectsFromSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1;
- (void)addObjectsFromOrderedSet:(id)arg1 range:(struct _NSRange)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObjectsFromArray:(id)arg1 range:(struct _NSRange)arg2;
- (void)addObjects:(const id *)arg1 count:(unsigned int)arg2;
- (void)_mutate;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;

@end


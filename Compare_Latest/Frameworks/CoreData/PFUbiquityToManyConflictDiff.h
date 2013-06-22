/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface PFUbiquityToManyConflictDiff : NSObject
{
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSString *_relationshipKey;
}

- (id)init;
- (id)initForRelationshipAtKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)diffWithLogSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2;
@property(readonly, nonatomic) NSString *relationshipKey; // @synthesize relationshipKey=_relationshipKey;
@property(readonly, nonatomic) NSMutableSet *deletedObjectIDs; // @synthesize deletedObjectIDs=_deletedObjectIDs;
@property(readonly, nonatomic) NSMutableSet *insertedObjectIDs; // @synthesize insertedObjectIDs=_insertedObjectIDs;

@end


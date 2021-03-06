/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSArray, NSIndexSet, PLObjectSnapshot;

@interface PLContainerChangeNotification : PLChangeNotification
{
    id _object;
    PLObjectSnapshot *_snapshot;
    NSArray *_changedObjects;
    BOOL _didCalculateDiffs;
    BOOL _shouldReload;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray *_movedFromIndexes;
    NSIndexSet *_changedIndexes;
    BOOL _countDidChange;
}

@property(readonly, nonatomic) NSArray *changedObjects;
@property(readonly, nonatomic) NSArray *insertedObjects;
@property(readonly, nonatomic) NSArray *deletedObjects;
- (BOOL)countDidChange;
@property(readonly, nonatomic) NSIndexSet *changedIndexes;
@property(readonly, nonatomic) BOOL hasMoves;
- (void)enumerateMovesWithBlock:(id)arg1;
@property(readonly, nonatomic) NSIndexSet *insertedIndexes;
@property(readonly, nonatomic) NSIndexSet *deletedIndexes;
@property(readonly, nonatomic) BOOL shouldReload;
- (id)name;
- (id)object;
- (void)dealloc;
- (id)init;

@end


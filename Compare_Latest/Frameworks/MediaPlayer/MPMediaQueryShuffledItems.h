/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MPMediaQuery, NSArray, NSMutableArray;

@interface MPMediaQueryShuffledItems : NSObject <NSCoding, NSCopying>
{
    unsigned int _activeShuffleType;
    BOOL _dirty;
    NSMutableArray *_orderedArray;
    MPMediaQuery *_sourceMediaQuery;
    NSArray *_sourceMediaQueryItems;
}

@property(readonly, nonatomic) MPMediaQuery *sourceMediaQuery; // @synthesize sourceMediaQuery=_sourceMediaQuery;
- (void)_shuffleMutableArray:(id)arg1 withInitialIndex:(unsigned int)arg2;
- (void)_resetCaches;
- (void)_rebuildItemCachesWithInitialItemIndex:(unsigned int)arg1;
- (void)_rebuildGroupedCachesWithInitialItemIndex:(unsigned int)arg1;
- (void)_rebuildCachesWithInitialIndex:(unsigned int)arg1;
- (void)_rebuildCaches;
- (id)_includeInShuffleItemsForQuery:(id)arg1;
- (void)unshuffle;
- (void)shuffleItemsWithInitialIndex:(unsigned int)arg1;
- (void)shuffleAlbumsWithInitialIndex:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)invalidateSourceMediaQueryAndLoadItems;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfItemWithPersistentID:(unsigned long long)arg1;
- (unsigned int)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithSourceMediaQuery:(id)arg1;
- (id)initWithSourceMediaQuery:(id)arg1 orderedItems:(id)arg2 shuffleType:(unsigned int)arg3;

@end


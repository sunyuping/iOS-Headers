/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class AVTrackGroupInternal, NSArray;

@interface AVTrackGroup : NSObject <NSCopying>
{
    AVTrackGroupInternal *_trackGroup;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) NSArray *trackIDs; // @dynamic trackIDs;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSData;

@interface MPMovieErrorLog : NSObject <NSCopying>
{
    struct MPMovieErrorLogInternal _internal;
}

@property(nonatomic) struct MPMovieErrorLogInternal _internal; // @synthesize _internal;
@property(readonly, nonatomic) NSArray *events;
@property(readonly, nonatomic) unsigned int extendedLogDataStringEncoding;
@property(readonly, nonatomic) NSData *extendedLogData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_initWithAVItemErrorLog:(id)arg1;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask
{
    NSString *_nextETag;
}

@property(retain) NSString *nextETag; // @synthesize nextETag=_nextETag;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSString;

@interface CoreDAVDeleteTask : CoreDAVTask
{
    NSString *_previousETag;
}

@property(retain) NSString *previousETag; // @synthesize previousETag=_previousETag;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(nonatomic) id <CoreDAVTaskDelegate> delegate; // @dynamic delegate;

@end


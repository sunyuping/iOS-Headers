/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEnumerator.h"

@interface _SCRCStackQueueEnumerator : NSEnumerator
{
    struct _SCRCStackNode *_currentListMemeber;
}

- (id)initWithListMember:(struct _SCRCStackNode *)arg1;
- (id)nextObject;

@end


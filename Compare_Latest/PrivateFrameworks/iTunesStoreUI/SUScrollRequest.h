/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSValue;

@interface SUScrollRequest : NSObject
{
    _Bool _animated;
    id _completionHandler;
    NSValue *_contentOffsetValue;
    NSValue *_frameValue;
}

@property(retain) NSValue *frameValue; // @synthesize frameValue=_frameValue;
@property(retain) NSValue *contentOffsetValue; // @synthesize contentOffsetValue=_contentOffsetValue;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (void)dealloc;

@end


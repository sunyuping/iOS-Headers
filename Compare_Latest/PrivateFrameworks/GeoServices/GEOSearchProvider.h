/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GEOSearchProvider : NSObject
{
    id _error;
}

+ (id)hostname;
+ (unsigned short)provider;
@property(copy, nonatomic) id error; // @synthesize error=_error;
- (void)cancel;
- (void)search:(id)arg1 finished:(id)arg2 spellingSuggestion:(void)arg3 refinement:(id)arg4 error:(void)arg5;
- (void)dealloc;

@end


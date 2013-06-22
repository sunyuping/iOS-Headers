/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CAContext.h>

@interface CAContextImpl : CAContext
{
    struct Context *_impl;
}

- (id)initWithOptions:(id)arg1 localContext:(_Bool)arg2;
- (id)initRemoteWithOptions:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (unsigned int)contextId;
- (struct CGColorSpace *)colorSpace;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (id)layer;
- (void)setLayer:(id)arg1;
- (void)orderAbove:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (void)setLevel:(float)arg1;
- (float)level;
- (id)options;
- (BOOL)valid;
- (unsigned int)createFencePort;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)arg1;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (struct Context *)renderContext;

@end


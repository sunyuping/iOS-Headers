/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@interface CALayer (MKAdditions)
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id)arg3;
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;
@property(readonly, nonatomic) CALayer *_mapKit_mapLayer;
- (_Bool)getPresentationValue:(id *)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(_Bool)arg4;
- (_Bool)getPresentationValue:(id *)arg1 forKey:(id)arg2 removeAnimation:(_Bool)arg3;
@property(readonly, nonatomic) CALayer *currentLayer;
@end


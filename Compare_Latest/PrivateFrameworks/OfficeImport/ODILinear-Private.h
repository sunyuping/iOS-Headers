/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/ODILinear.h>

@interface ODILinear (Private)
- (id)initWithState:(id)arg1;
- (void)setIsHorizontal:(BOOL)arg1;
- (void)setWithConnectors:(BOOL)arg1;
- (void)setStretch:(BOOL)arg1;
- (void)setPointHeight:(float)arg1;
- (void)setConnectorWidth:(float)arg1;
- (void)setPadding:(float)arg1;
- (void)setIsTextCentered:(BOOL)arg1;
- (void)setIsTextCenteredHorizontally:(BOOL)arg1;
- (void)setIsTextCenteredVertically:(BOOL)arg1;
- (void)setMaxPointCount:(unsigned int)arg1;
- (void)map;
- (void)setLogicalBounds;
- (void)nextPointBounds:(struct CGRect *)arg1;
- (void)mapPoint:(id)arg1 bounds:(struct CGRect)arg2;
- (void)mapStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapTransition:(id)arg1 pointBounds:(struct CGRect)arg2;
- (void)mapStyleFromTransition:(id)arg1 shape:(id)arg2;
@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/PDSequentialTimeNodeGroup.h>

@class NSString, PDAnimationTargetElement;

@interface PDSequentialTimeNodeGroup (PDAnimationInfoAdditions)
+ (id)createSequentialTimeNodeGroupForAnimationInfo;
- (id)level1ParallelTimeNodeGroup;
- (id)level2ParallelTimeNodeGroup;
- (id)level3SetBehavior;
@property(retain, nonatomic) PDAnimationTargetElement *targetElement;
@property(nonatomic) int presetClass;
@property(nonatomic) int presetId;
@property(nonatomic) int triggerType;
@property(nonatomic) int iterateType;
@property(nonatomic) double delay;
@property(nonatomic) double direction;
@property(retain, nonatomic) NSString *groupId;
@end


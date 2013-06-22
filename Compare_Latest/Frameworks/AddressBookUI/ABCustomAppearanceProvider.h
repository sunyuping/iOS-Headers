/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject
{
    ABStyleProvider *_styleProvider;
}

- (id)init;
- (void)dealloc;
- (Class)propertyCellClass;
- (Class)actionCellClass;
- (id)newActionButton;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2;
- (id)newScrollingBackgroundView;
- (float)distanceBetweenSections;
- (int)unknownModalPresentationStyle;
- (void)setHighlighted:(BOOL)arg1 onPropertyCell:(id)arg2;
- (Class)customCardCellClass;
- (Class)customCardActionCellClass;
- (id)newCardActionButton;
- (id)newCustomCardTableScrollingBackgroundView;
- (float)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1;
- (float)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1;
- (BOOL)shouldPropagateStylesToPickers;
- (BOOL)shouldPropagateStylesThroughUnknownPersonActions;
- (void)customSetEmphasized:(BOOL)arg1 onCell:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end


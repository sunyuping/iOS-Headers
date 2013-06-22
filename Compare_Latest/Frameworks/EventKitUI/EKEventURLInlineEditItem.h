/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEventEditItem.h>

#import "UITextFieldDelegate-Protocol.h"

@class CalendarURLCell, UIResponder;

@interface EKEventURLInlineEditItem : EKEventEditItem <UITextFieldDelegate>
{
    CalendarURLCell *_cell;
    UIResponder *_selectedTextField;
}

@property(retain, nonatomic) UIResponder *selectedResponder; // @synthesize selectedResponder=_selectedTextField;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (BOOL)isInline;
- (id)cellForSubitemAtIndex:(int)arg1;
- (id)selectedTextField;
- (void)reset;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;

@end


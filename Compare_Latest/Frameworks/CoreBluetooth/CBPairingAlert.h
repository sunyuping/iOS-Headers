/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, UIAlertView, UIButton, UITextField;

@interface CBPairingAlert : NSObject
{
    UIAlertView *_alert;
    UIButton *_doneButton;
    UITextField *_passkeyField;
    NSNumber *_pairingType;
    id <CBPairingAlertDelegate> _delegate;
}

- (id)initWithPairingType:(id)arg1 andPasskey:(id)arg2;
- (void)dealloc;
- (void)show;
- (void)dismiss;
- (void)textDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(nonatomic) id <CBPairingAlertDelegate> delegate; // @synthesize delegate=_delegate;

@end


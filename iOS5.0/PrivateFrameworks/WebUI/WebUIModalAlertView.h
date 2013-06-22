/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

#import "UIAlertViewDelegate-Protocol.h"

@interface WebUIModalAlertView : UIAlertView <UIAlertViewDelegate>
{
    int _clickedButton;
}

+ (id)modalAlertSheetWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
- (int)clickedButton;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;

@end

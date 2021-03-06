/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Twitter/TWTweetComposeViewController.h>

@interface TWTweetComposeViewController (TWTweetComposeViewControllerAccountAdditions)
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)accountButtonTapped:(id)arg1;
- (void)showAccountsPicker;
- (void)showIPhoneAccountsPicker;
- (int)indexOfSelectedAccountEntry;
- (void)accountsViewController:(id)arg1 didChooseAccountEntry:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)showIPadAccountsPicker;
- (void)hideIPadAccountsPicker;
- (void)updateActiveAccount;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)presentNoAccessDialog;
- (void)presentNoAccountsDialog;
- (void)fetchSessionInfo;
- (void)switchToSettingsAndCancel;
- (id)accountEntryWithIdentifier:(id)arg1;
- (id)accountEntries;
- (id)selectedAccountEntry;
- (void)setSelectedAccountEntry:(id)arg1;
- (void)updateAccountLabelsForOrientation:(int)arg1;
- (struct CGRect)accountLabelFrame;
- (struct CGRect)fromLabelFrame;
- (BOOL)showAccountFieldForOrientation:(int)arg1;
@end


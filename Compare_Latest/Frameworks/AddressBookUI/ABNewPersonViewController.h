/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class ABGroupWrapper, ABPersonViewControllerHelper;

@interface ABNewPersonViewController : UIViewController
{
    id <ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
    id _parentGroup;
    id _helper;
    void *_recordForNewPerson;
}

@property(readonly, nonatomic) ABPersonViewControllerHelper *helper;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (id)init;
- (id)initWithStyle:(int)arg1;
- (void)dealloc;
@property(nonatomic) id <ABNewPersonViewControllerDelegate> newPersonViewDelegate;
@property(nonatomic) void *addressBook;
@property(retain, nonatomic) id <ABStyleProvider> styleProvider;
@property(nonatomic) void *displayedPerson;
@property(nonatomic) void *parentGroup;
@property(retain, nonatomic) ABGroupWrapper *parentGroupWrapper;
@property(nonatomic) BOOL showsCancelButton;
@property(nonatomic) BOOL savesNewContactOnSuspend;
- (void)savePerson:(void *)arg1;
- (void)saveAndTellDelegate:(BOOL)arg1;
- (void)cancel:(id)arg1;
- (void)attemptSaveAndTellDelegate:(BOOL)arg1;
- (void)save:(id)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) void *recordForNewPerson;
- (void)updateNavigationButtons;
- (void)loadView;
- (void)viewDidUnload;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)applicationWillSuspend;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidResume;
- (int)abViewControllerType;

@end


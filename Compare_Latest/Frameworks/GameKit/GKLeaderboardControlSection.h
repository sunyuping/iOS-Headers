/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "GKRibbonSegmentedControlDelegate-Protocol.h"
#import <GameKit/GKTableSection-Protocol.h>

@class GKRibbonSegmentedControl, UIView;

@interface GKLeaderboardControlSection : NSObject <GKTableSection, GKRibbonSegmentedControlDelegate>
{
    GKRibbonSegmentedControl *_timeScopeSegmentedControl;
    UIView *_controlContainer;
    BOOL _visible;
}

@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(retain, nonatomic) UIView *controlContainer; // @synthesize controlContainer=_controlContainer;
@property(retain, nonatomic) GKRibbonSegmentedControl *timeScopeSegmentedControl; // @synthesize timeScopeSegmentedControl=_timeScopeSegmentedControl;
- (void)ribbonSegmentedControlChanged:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)sectionRowCountInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
@property(nonatomic) int timeScope; // @dynamic timeScope;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic, getter=isLoading) BOOL loading;

@end


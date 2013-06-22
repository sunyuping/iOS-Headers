/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

@interface GKMatchmakerNavView : UIView
{
    UILabel *_titleLabel;
    UILabel *_playersLabel;
    BOOL _inMiniBar;
}

@property(nonatomic) BOOL inMiniBar; // @synthesize inMiniBar=_inMiniBar;
@property(retain, nonatomic) UILabel *playersLabel; // @synthesize playersLabel=_playersLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateForMiniBarState:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layout;
- (void)setPlayerRangeText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


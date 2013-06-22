/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIActivityIndicatorView, UILabel;

@interface GKProgressLabel : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _loading;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)layoutSubviews;
- (void)setLoading:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_loadingString;

@end


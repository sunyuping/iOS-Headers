/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PassKit/PKPassFaceView.h>

@class UILabel, WLEasyToHitCustomButton;

@interface PKPassFrontFaceView : PKPassFaceView
{
    WLEasyToHitCustomButton *_flipButton;
    WLEasyToHitCustomButton *_shareButton;
    UILabel *_logoLabel;
    BOOL _showsInfo;
    BOOL _showsShare;
}

@property(nonatomic) BOOL showsShare; // @synthesize showsShare=_showsShare;
@property(nonatomic) BOOL showsInfo; // @synthesize showsInfo=_showsInfo;
- (void)_shareButtonPressed;
- (void)_flipButtonPressed;
- (id)_relevantBuckets;
- (void)layoutSubviews;
- (void)prepareForFlip;
- (void)updateValidity;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (id)tallFaceTemplate;
- (id)shortFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (id)passFaceTemplate;
- (void)setClipsContent:(BOOL)arg1;
- (struct CGSize)contentSize;
- (BOOL)isFrontFace;
- (void)dealloc;
- (id)init;

@end

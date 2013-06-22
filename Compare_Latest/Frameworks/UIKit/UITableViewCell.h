/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "NSCoding-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UIColor, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITableView, UITextField;

@interface UITableViewCell : UIView <NSCoding, UIGestureRecognizerDelegate>
{
    UITableView *_tableView;
    id _layoutManager;
    id _target;
    SEL _editAction;
    SEL _accessoryAction;
    id _oldEditingData;
    id _editingData;
    float _rightMargin;
    int _indentationLevel;
    float _indentationWidth;
    NSString *_reuseIdentifier;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UIView *_multipleSelectionBackgroundView;
    UIView *_selectedOverlayView;
    float _selectionFadeDuration;
    UIColor *_backgroundColor;
    UIColor *_separatorColor;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_sectionBorderColor;
    UIView *_floatingSeparatorView;
    UIView *_topShadowAnimationView;
    UIView *_bottomShadowAnimationView;
    struct __CFDictionary *_unhighlightedStates;
    id _selectionSegueTemplate;
    struct {
        unsigned int showingDeleteConfirmation:1;
        unsigned int separatorStyle:3;
        unsigned int selectionStyle:3;
        unsigned int selectionFadeFraction:11;
        unsigned int editing:1;
        unsigned int editingStyle:3;
        unsigned int accessoryType:3;
        unsigned int editingAccessoryType:3;
        unsigned int showsAccessoryWhenEditing:1;
        unsigned int showsReorderControl:1;
        unsigned int showDisclosure:1;
        unsigned int showTopSeparator:1;
        unsigned int hideTopSeparatorDuringReordering:1;
        unsigned int disclosureClickable:1;
        unsigned int disclosureStyle:1;
        unsigned int showingRemoveControl:1;
        unsigned int sectionLocation:3;
        unsigned int tableViewStyle:1;
        unsigned int shouldIndentWhileEditing:1;
        unsigned int fontSet:1;
        unsigned int usingDefaultSelectedBackgroundView:1;
        unsigned int wasSwiped:1;
        unsigned int highlighted:1;
        unsigned int separatorDirty:1;
        unsigned int drawn:1;
        unsigned int drawingDisabled:1;
        unsigned int style:12;
        unsigned int showingMenu:1;
        unsigned int clipsContents:1;
        unsigned int animatingSelection:1;
        unsigned int backgroundColorSet:1;
        unsigned int needsSetup:1;
        unsigned int dontDrawTopShadow:1;
        unsigned int usingMultiselectbackgroundView:1;
        unsigned int layoutLoopCounter:2;
    } _tableCellFlags;
    UIButton *_accessoryView;
    UIButton *_editingAccessoryView;
    UIView *_customAccessoryView;
    UIView *_customEditingAccessoryView;
    UIView *_separatorView;
    UIView *_topSeparatorView;
    UIView *_topShadowView;
    UITextField *_editableTextField;
    double _lastSelectionTime;
    NSTimer *_deselectTimer;
    float _textFieldOffset;
    SEL _returnAction;
    UIColor *_selectionTintColor;
    UIColor *_accessoryTintColor;
    UIImage *_reorderControlImage;
    UILongPressGestureRecognizer *longPressGesture;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)setSectionLocation:(int)arg1;
- (void)_setupSelectedBackgroundView;
- (int)sectionLocation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (struct CGRect)contentRectForState:(unsigned int)arg1;
- (void)didTransitionToState:(unsigned int)arg1;
- (void)willTransitionToState:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)removeFromSuperview;
- (SEL)accessoryAction;
- (void)setAccessoryAction:(SEL)arg1;
- (SEL)editAction;
- (void)setEditAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)reorderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)accessoryRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)textRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_delegateConfirmationRect;
@property(readonly, nonatomic) BOOL showingDeleteConfirmation;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
@property(nonatomic, getter=isEditing) BOOL editing;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (float)selectionFadeDuration;
- (void)setSelectionFadeDuration:(float)arg1;
- (BOOL)clipsContents;
- (void)setClipsContents:(BOOL)arg1;
- (unsigned int)currentStateMask;
@property(nonatomic) float indentationWidth;
@property(nonatomic) int indentationLevel;
- (BOOL)hidesAccessoryWhenEditing;
- (void)setHidesAccessoryWhenEditing:(BOOL)arg1;
@property(retain, nonatomic) UIView *editingAccessoryView;
@property(nonatomic) int editingAccessoryType;
- (id)_accessoryTintColor;
- (void)_setAccessoryTintColor:(id)arg1;
@property(retain, nonatomic) UIView *accessoryView;
@property(nonatomic) int accessoryType;
- (void)_syncAccessoryViewsIfNecessary;
@property(nonatomic) BOOL shouldIndentWhileEditing;
@property(nonatomic) BOOL showsReorderControl;
@property(readonly, nonatomic) int editingStyle;
- (void)setEditingStyle:(int)arg1;
- (int)style;
- (id)selectedOverlayView;
- (id)layoutManager;
- (void)setLayoutManager:(id)arg1;
- (void)_drawContentInRect:(struct CGRect)arg1 selected:(BOOL)arg2;
- (void)_updateHighlightColors;
- (BOOL)_isHighlighted;
- (float)selectionPercent;
- (BOOL)isAtLeastHalfSelected;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_delayedDeselect;
- (void)_deselectAnimationFinished;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_cancelInternalPerformRequests;
- (void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
@property(nonatomic, getter=isSelected) BOOL selected;
- (id)selectionTintColor;
- (void)setSelectionTintColor:(id)arg1;
@property(nonatomic) int selectionStyle;
- (void)_setSelectionStyle:(int)arg1 selectionTintColor:(id)arg2;
- (void)_setUnhighlightedBackgroundColor:(id)arg1 forSubview:(id)arg2;
- (void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2;
- (id)_multiselectBackgroundColor;
- (void)_clearOpaqueViewState:(id)arg1;
- (void)_saveOpaqueViewState:(id)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic) NSString *reuseIdentifier;
- (void)setReuseIdentifier:(id)arg1;
- (void)setSectionBorderColor:(id)arg1;
- (id)sectionBorderColor;
- (id)bottomShadowColor;
- (void)setBottomShadowColor:(id)arg1;
- (id)topShadowColor;
- (void)setTopShadowColor:(id)arg1;
- (id)separatorColor;
- (void)setSeparatorColor:(id)arg1;
- (id)tableBackgroundColor;
- (void)setTableBackgroundColor:(id)arg1;
- (BOOL)_backgroundColorSet;
- (id)_contentBackgroundColor;
- (void)_setTableBackgroundCGColor:(struct CGColor *)arg1 withSystemColorName:(id)arg2;
- (int)separatorStyle;
- (void)setSeparatorStyle:(int)arg1;
@property(retain, nonatomic) UIView *selectedBackgroundView;
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;
- (void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2;
- (void)selectedBackgroundViewChange:(id)arg1 finished:(id)arg2 context:(id)arg3;
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIView *contentView;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)selectedTextColor;
- (void)setSelectedTextColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (int)lineBreakMode;
- (void)setLineBreakMode:(int)arg1;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)_setFont:(id)arg1 layout:(BOOL)arg2;
- (id)text;
- (void)setText:(id)arg1;
@property(readonly, nonatomic) UIImageView *imageView;
@property(readonly, nonatomic) UILabel *detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel;
- (BOOL)_canDrawContent;
- (void)setDrawingEnabled:(BOOL)arg1;
- (BOOL)drawingEnabled;
- (void)_didCreateContentView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)_setupMenuGesture;
- (void)_setupTableViewCellCommon;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_updateSeparatorContent;
- (id)selectionSegueTemplate;
- (void)setSelectionSegueTemplate:(id)arg1;

@end


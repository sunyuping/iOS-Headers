/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UITextSelectionRect.h>

@class WebSelectionRect;

@interface UITextSelectionRectImpl : UITextSelectionRect
{
    WebSelectionRect *webRect;
}

+ (id)rectsWithWebRects:(id)arg1;
+ (id)rectWithWebRect:(id)arg1;
@property(retain, nonatomic) WebSelectionRect *webRect; // @synthesize webRect;
- (id)range;
- (int)writingDirection;
- (struct CGRect)rect;
- (void)dealloc;
- (id)initWithWebRect:(id)arg1;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardCandidateExtendedCell.h>

@interface UIKeyboardCandidateShowMoreCandidatesCell : UIKeyboardCandidateExtendedCell
{
    float _columnWidth;
    float _maximumWidth;
}

+ (id)showMoreCandidatesCellWithVisualStyle:(int)arg1 columnWidth:(float)arg2 maximumWidth:(float)arg3;
@property(nonatomic) float maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) float columnWidth; // @synthesize columnWidth=_columnWidth;
- (void)calculateSize;

@end


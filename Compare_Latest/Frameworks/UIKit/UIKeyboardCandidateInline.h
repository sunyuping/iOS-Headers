/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIKeyboardCandidateList-Protocol.h"
#import "UIKeyboardCandidateListDelegate-Protocol.h"

@class NSArray, NSString, UIKeyboardCandidateExtended, UIView<UIKeyboardCandidateList>;

@interface UIKeyboardCandidateInline : NSObject <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate>
{
    id <UIKeyboardCandidateListDelegate> _candidateListDelegate;
    NSArray *_candidates;
    NSString *_inlineText;
    int _promptTextType;
    struct CGRect _inlineRect;
    UIKeyboardCandidateExtended *_extendedCandidatesView;
    BOOL _showingExtendedCandidatesView;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property(nonatomic) BOOL showingExtendedCandidatesView; // @synthesize showingExtendedCandidatesView=_showingExtendedCandidatesView;
@property(retain, nonatomic) UIKeyboardCandidateExtended *extendedCandidatesView; // @synthesize extendedCandidatesView=_extendedCandidatesView;
@property(nonatomic) struct CGRect inlineRect; // @synthesize inlineRect=_inlineRect;
@property(nonatomic) int promptTextType; // @synthesize promptTextType=_promptTextType;
@property(copy, nonatomic) NSString *inlineText; // @synthesize inlineText=_inlineText;
@property(copy, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property(nonatomic) id <UIKeyboardCandidateListDelegate> candidateListDelegate; // @synthesize candidateListDelegate=_candidateListDelegate;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)setCompletionContext:(id)arg1;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect)arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)configureKeyboard:(id)arg1;
- (unsigned int)count;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (id)currentCandidate;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)layout;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (void)animateInlineCandidate;
- (void)hideExtendedCandidatesView;
- (void)showExtendedCandidatesView;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) UIView<UIKeyboardCandidateList> *inlineView; // @dynamic inlineView;

@end

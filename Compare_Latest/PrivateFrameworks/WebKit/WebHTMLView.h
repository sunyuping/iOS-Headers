/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WAKView.h"

#import "WebDocumentSearching-Protocol.h"
#import "WebDocumentView-Protocol.h"

@class WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentView, WebDocumentSearching>
{
    WebHTMLViewPrivate *_private;
}

+ (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)finalize;
- (BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)arg1;
- (struct Command)coreCommandBySelector:(SEL)arg1;
- (struct Command)coreCommandByName:(const char *)arg1;
- (void)executeCoreCommandBySelector:(SEL)arg1;
- (void)executeCoreCommandByName:(const char *)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (void)delete:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)indent:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;
- (void)moveToBeginningOfSentence:(id)arg1;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfLineAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;
- (void)moveToEndOfSentence:(id)arg1;
- (void)moveToEndOfSentenceAndModifySelection:(id)arg1;
- (void)moveToLeftEndOfLine:(id)arg1;
- (void)moveToLeftEndOfLineAndModifySelection:(id)arg1;
- (void)moveToRightEndOfLine:(id)arg1;
- (void)moveToRightEndOfLineAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)outdent:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)pageDownAndModifySelection:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)pageUpAndModifySelection:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectLine:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectSentence:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectWord:(id)arg1;
- (void)setMark:(id)arg1;
- (void)subscript:(id)arg1;
- (void)superscript:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (void)transpose:(id)arg1;
- (void)underline:(id)arg1;
- (void)unscript:(id)arg1;
- (void)yank:(id)arg1;
- (void)yankAndSelect:(id)arg1;
- (void)clearText:(id)arg1;
- (void)toggleBold:(id)arg1;
- (void)toggleItalic:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)jumpToSelection:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)maintainsInactiveSelection;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)_web_makePluginSubviewsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (void)addSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)reapplyStyles;
- (void)layoutToMinimumPageWidth:(float)arg1 height:(float)arg2 maximumPageWidth:(float)arg3 adjustingViewSize:(BOOL)arg4;
- (void)layout;
- (BOOL)searchFor:(id)arg1 direction:(BOOL)arg2 caseSensitive:(BOOL)arg3 wrap:(BOOL)arg4;
- (void)clearFocus;
- (BOOL)isOpaque;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setNeedsToApplyStyles:(BOOL)arg1;
- (void)drawSingleRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)_isSelectionEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)touch:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)setDataSource:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)_setPrinting:(BOOL)arg1 minimumPageLogicalWidth:(float)arg2 logicalHeight:(float)arg3 maximumPageLogicalWidth:(float)arg4 adjustViewSize:(BOOL)arg5 paginateScreenContent:(BOOL)arg6;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)_accessibilityParentForSubview:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (id)_emptyStyle;
- (void)_applyStyleToSelection:(id)arg1 withUndoAction:(int)arg2;
- (void)_applyParagraphStyleToSelection:(id)arg1 withUndoAction:(int)arg2;
- (void)_changeWordCaseWithSelector:(SEL)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)lowercaseWord:(id)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)toggleBaseWritingDirection:(id)arg1;
- (void)makeBaseWritingDirectionNatural:(id)arg1;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)_updateControlTints;
- (void)_windowChangedKeyState;

@end


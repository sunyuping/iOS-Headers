/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MessageTextAttachment.h"

@interface MessageTextAttachment (DisplayableTest)
- (id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1;
- (id)contentType;
- (id)unzippedContentType;
- (id)mimeType;
- (BOOL)_isSinglePagePDFThatIsAllowedToBeInline;
- (BOOL)isContentOpenable;
- (BOOL)isContentDownloadable;
- (BOOL)isDisplayableInsidePlugin;
- (BOOL)isDisplayableInline;
@end


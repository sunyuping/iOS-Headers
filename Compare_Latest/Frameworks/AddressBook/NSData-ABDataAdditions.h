/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface NSData (ABDataAdditions)
- (id)abStringAtRange:(struct _NSRange)arg1 inEncoding:(unsigned int)arg2;
- (BOOL)abIsUTF16EntourageVCard;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned int)arg1;
- (id)abEncodeBase64DataBreakLines:(BOOL)arg1 allowSlash:(BOOL)arg2 padChar:(BOOL)arg3;
- (id)abDecodedUTF7;
- (id)abDecodeVCardBase64;
@end


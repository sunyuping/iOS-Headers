/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSURLResponseInternal;

@interface NSURLResponse : NSObject <NSCoding, NSCopying>
{
    NSURLResponseInternal *_internal;
}

+ (id)_responseWithCFURLResponse:(struct _CFURLResponse *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)suggestedFilename;
- (long long)expectedContentLength;
- (id)textEncodingName;
- (id)MIMEType;
- (id)URL;
- (struct _CFURLResponse *)_CFURLResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(int)arg3 textEncodingName:(id)arg4;
- (id)_initWithCFURLResponse:(struct _CFURLResponse *)arg1;

@end


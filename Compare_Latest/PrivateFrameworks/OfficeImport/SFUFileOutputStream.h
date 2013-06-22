/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFUOutputStream-Protocol.h"

@class NSString;

@interface SFUFileOutputStream : NSObject <SFUOutputStream>
{
    struct __sFILE *mFile;
    NSString *mPath;
}

- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (id)path;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (long long)offset;
- (BOOL)canSeek;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canCreateInputStream;
- (id)inputStream;
- (void)close;
- (id)closeLocalStream;

@end


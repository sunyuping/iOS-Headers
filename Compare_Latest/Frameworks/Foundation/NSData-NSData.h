/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@interface NSData (NSData)
+ (id)dataWithData:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
+ (id)dataWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2;
+ (id)dataWithBytes:(const void *)arg1 length:(unsigned int)arg2;
+ (id)data;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)base64Encoding;
- (id)initWithBase64Encoding:(id)arg1;
- (struct _NSRange)rangeOfData:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)initWithBytes:(void *)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 error:(id *)arg3;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (BOOL)isEqualToData:(id)arg1;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned int)arg2;
- (void)getBytes:(void *)arg1;
- (BOOL)_bytesAreVM;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)_asciiDescription;
- (id)description;
- (unsigned long)_cfTypeID;
- (const void *)bytes;
- (unsigned int)length;
@end


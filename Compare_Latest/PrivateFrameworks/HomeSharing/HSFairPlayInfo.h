/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface HSFairPlayInfo : NSObject
{
    void *_hwInfo;
    NSArray *_requestsToSign;
}

- (id)_hexStringForData:(id)arg1;
- (BOOL)shouldSignRequestAction:(id)arg1;
- (id)signatureForData:(id)arg1;
- (id)processSignedResponseData:(id)arg1 withSignature:(id)arg2;
- (BOOL)setupMescalWithURL:(id)arg1 certificateURL:(id)arg2 requestsToSign:(id)arg3 userAgent:(id)arg4;
- (void)endMescalSession;
- (id)securityInfoForURL:(id)arg1;
- (void)endSecuritySession;
- (id)continueNegotationWithData:(id)arg1 isComplete:(char *)arg2;
- (id)beginNegotiation;
@property(readonly, nonatomic) NSString *deviceGUID;
- (void)dealloc;
- (id)init;

@end


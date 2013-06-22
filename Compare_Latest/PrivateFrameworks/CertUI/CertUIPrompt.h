/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CertUIPrompt : NSObject
{
    struct __SecTrust *_trust;
    NSString *_host;
    NSString *_service;
    NSString *_connectionDisplayName;
    id _responseBlock;
}

+ (struct dispatch_queue_s *)promptQueue;
@property(copy, nonatomic) NSString *connectionDisplayName; // @synthesize connectionDisplayName=_connectionDisplayName;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (int)showAndWaitForResponse;
- (void)_informConsumerOfResponse:(int)arg1;
- (void)showPromptWithResponseBlock:(id)arg1;
- (int)_sendRemoteMessage;
- (int)_responseFromReplyDict:(id)arg1;
- (id)_messagingCenter;
- (id)_newUserInfoForDisplayName:(id)arg1 hostname:(id)arg2 trust:(struct __SecTrust *)arg3;
- (id)_digestFromTrust:(struct __SecTrust *)arg1;
- (id)_expirationFromTrust:(struct __SecTrust *)arg1;
- (id)_purposeFromTrustProperties:(id)arg1;
- (id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3;
- (id)_subtitleFromTrust:(struct __SecTrust *)arg1;
- (id)_titleFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (struct __SecTrust *)trust;
- (void)setTrust:(struct __SecTrust *)arg1;
- (id)description;
- (void)dealloc;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLAuthenticationChallengeSender-Protocol.h"

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender>
{
    struct AuthenticationClient *m_client;
    struct _CFURLAuthChallenge *m_cfChallenge;
}

- (id)initWithAuthenticationClient:(struct AuthenticationClient *)arg1;
- (struct AuthenticationClient *)client;
- (void)detachClient;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)setCFChallenge:(struct _CFURLAuthChallenge *)arg1;
- (struct _CFURLAuthChallenge *)cfChallenge;

@end


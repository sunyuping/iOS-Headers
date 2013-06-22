/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalDAV/CalDAVOperation.h>

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation
{
    BOOL _fetchPrincipalSearchProperties;
}

- (void)refreshProperties;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
@property BOOL fetchPrincipalSearchProperties; // @synthesize fetchPrincipalSearchProperties=_fetchPrincipalSearchProperties;

// Remaining properties
@property(nonatomic) id <CalDAVAccountPropertyRefreshDelegate> delegate; // @dynamic delegate;

@end

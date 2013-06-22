/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SUPurchaseManagerDelegate <NSObject>

@optional
- (id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
@end


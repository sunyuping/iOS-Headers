/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (NSEmailAddressString)
+ (id)mf_formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(BOOL)arg3;
- (id)mf_copyUncommentedAddress;
- (id)mf_uncommentedAddress;
- (id)mf_uncommentedAddressRespectingGroups;
- (id)mf_addressComment;
- (id)mf_copyAddressComment;
- (BOOL)mf_isLegalCommentedEmailAddress;
- (BOOL)mf_isLegalEmailAddress;
- (id)mf_addressDomain;
- (BOOL)mf_isEqualToAddress:(id)arg1;
@end

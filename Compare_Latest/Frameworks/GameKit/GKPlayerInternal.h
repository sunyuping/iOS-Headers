/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKInternalRepresentation.h>

@class GKGameInternal, NSArray, NSDate, NSDictionary, NSString;

@interface GKPlayerInternal : GKInternalRepresentation
{
    NSString *_playerID;
    NSString *_alias;
    NSString *_status;
    NSDate *_lastSeenDate;
    BOOL _purpleBuddyAccount;
    unsigned int _validPieces;
    NSString *_accountName;
    BOOL _underage;
    BOOL _findable;
    BOOL _photoPending;
    NSString *_firstName;
    NSString *_lastName;
    int _numberOfFriends;
    int _numberOfFriendsInCommon;
    int _numberOfGames;
    int _numberOfGamesInCommon;
    int _numberOfAchievements;
    int _numberOfAchievementPoints;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
    NSArray *_emailAddresses;
    NSDictionary *_photos;
    NSArray *_friends;
}

+ (id)codedPropertyKeys;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(retain, nonatomic) NSDictionary *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) GKGameInternal *lastPlayedGame; // @synthesize lastPlayedGame=_lastPlayedGame;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @synthesize lastPlayedDate=_lastPlayedDate;
@property(nonatomic) int numberOfAchievementPoints; // @synthesize numberOfAchievementPoints=_numberOfAchievementPoints;
@property(nonatomic) int numberOfAchievements; // @synthesize numberOfAchievements=_numberOfAchievements;
@property(nonatomic) int numberOfGamesInCommon; // @synthesize numberOfGamesInCommon=_numberOfGamesInCommon;
@property(nonatomic) int numberOfGames; // @synthesize numberOfGames=_numberOfGames;
@property(nonatomic) int numberOfFriendsInCommon; // @synthesize numberOfFriendsInCommon=_numberOfFriendsInCommon;
@property(nonatomic) int numberOfFriends; // @synthesize numberOfFriends=_numberOfFriends;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic, getter=isPhotoPending) BOOL photoPending; // @synthesize photoPending=_photoPending;
@property(nonatomic, getter=isFindable) BOOL findable; // @synthesize findable=_findable;
@property(nonatomic, getter=isUnderage) BOOL underage; // @synthesize underage=_underage;
@property(retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(nonatomic) unsigned int validPieces; // @synthesize validPieces=_validPieces;
@property(nonatomic, getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount; // @synthesize purpleBuddyAccount=_purpleBuddyAccount;
@property(retain, nonatomic) NSDate *lastSeenDate; // @synthesize lastSeenDate=_lastSeenDate;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
- (id)description;
- (id)serverRepresentation;
- (void)dealloc;

@end


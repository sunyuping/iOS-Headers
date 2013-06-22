/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GMMGeometry, NSString;

@interface GMMNewLocation : PBCodable
{
    NSString *_query;
    GMMGeometry *_geocode;
    NSString *_queryRefinementToken;
    BOOL _hasIsVia;
    BOOL _isVia;
    BOOL _hasWaypointType;
    int _waypointType;
}

@property(nonatomic) BOOL hasWaypointType; // @synthesize hasWaypointType=_hasWaypointType;
@property(nonatomic) BOOL hasIsVia; // @synthesize hasIsVia=_hasIsVia;
@property(retain, nonatomic) NSString *queryRefinementToken; // @synthesize queryRefinementToken=_queryRefinementToken;
@property(retain, nonatomic) GMMGeometry *geocode; // @synthesize geocode=_geocode;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) int waypointType; // @synthesize waypointType=_waypointType;
@property(nonatomic) BOOL isVia; // @synthesize isVia=_isVia;
@property(readonly, nonatomic) BOOL hasQueryRefinementToken;
@property(readonly, nonatomic) BOOL hasGeocode;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)dealloc;

@end


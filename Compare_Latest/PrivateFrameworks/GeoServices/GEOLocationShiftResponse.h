/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class GEOPixelPoint;

@interface GEOLocationShiftResponse : PBCodable
{
    GEOPixelPoint *_shiftedPixel;
}

@property(retain, nonatomic) GEOPixelPoint *shiftedPixel; // @synthesize shiftedPixel=_shiftedPixel;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end


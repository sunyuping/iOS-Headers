/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker
{
    unsigned int _chapterIndex;
    NSArray *_chapters;
    BOOL _hasArtworkAtPlaybackTime;
}

@property(nonatomic) BOOL hasArtworkAtPlaybackTime; // @synthesize hasArtworkAtPlaybackTime=_hasArtworkAtPlaybackTime;
@property(retain, nonatomic) NSArray *chapters; // @synthesize chapters=_chapters;
@property(nonatomic) unsigned int chapterIndex; // @synthesize chapterIndex=_chapterIndex;
- (void)dealloc;

@end


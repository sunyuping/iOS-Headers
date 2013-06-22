/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVOutputSettings, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInputConfigurationState : NSObject
{
    NSString *_mediaType;
    AVOutputSettings *_outputSettings;
    struct opaqueCMFormatDescription *_sampleBufferFormatHint;
    NSDictionary *_sourcePixelBufferAttributes;
    BOOL _attachedToPixelBufferAdaptor;
    NSArray *_metadataItems;
    struct CGAffineTransform _transform;
    int _mediaTimeScale;
    BOOL _expectsMediaDataInRealTime;
}

- (void)dealloc;
@property(nonatomic) BOOL expectsMediaDataInRealTime; // @synthesize expectsMediaDataInRealTime=_expectsMediaDataInRealTime;
@property(nonatomic) int mediaTimeScale; // @synthesize mediaTimeScale=_mediaTimeScale;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(copy, nonatomic) NSArray *metadataItems; // @synthesize metadataItems=_metadataItems;
@property(nonatomic) BOOL attachedToPixelBufferAdaptor; // @synthesize attachedToPixelBufferAdaptor=_attachedToPixelBufferAdaptor;
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes; // @synthesize sourcePixelBufferAttributes=_sourcePixelBufferAttributes;
@property(retain, nonatomic) struct opaqueCMFormatDescription *sampleBufferFormatHint; // @synthesize sampleBufferFormatHint=_sampleBufferFormatHint;
@property(copy, nonatomic) AVOutputSettings *outputSettings; // @synthesize outputSettings=_outputSettings;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;

@end


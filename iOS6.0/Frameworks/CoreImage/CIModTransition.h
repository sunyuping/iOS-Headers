/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIModTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIVector *inputCenter;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
    NSNumber *inputCompression;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputCompression; // @synthesize inputCompression;
@property(copy, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(copy, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(copy, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(copy, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (void)setDefaults;

@end


/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDateFormatter;

@interface SBDefaultDateLabelDateFormatCache : NSObject
{
    NSDateFormatter *_dayOfWeekFormatter;
    NSDateFormatter *_dayMonthYearFormatter;
    NSDateFormatter *_dayMonthFormatter;
    NSDateFormatter *_timeFormatter;
}

- (id)init;
- (void)dealloc;
- (void)resetFormattersIfNecessary;
- (void)resetFormatters:(id)arg1;
- (id)formatDateAsDayOfWeek:(id)arg1;
- (id)formatDateAsDayMonthYearStyle:(id)arg1;
- (id)formatDateAsDayMonthStyle:(id)arg1;
- (id)formatDateAsTimeStyle:(id)arg1;

@end


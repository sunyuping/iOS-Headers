/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIPickerView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSCalendar, NSDate, NSDateComponents, NSLocale, NSString, NSTimeZone, UIDatePicker, UILabel;

@interface UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    int _datePickerMode;
    NSLocale *_locale;
    NSTimeZone *_timeZone;
    NSCalendar *_calendar;
    struct __CFDateFormatter *_localDateFormatter;
    NSDate *_date;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    double _countDownDuration;
    int _minuteInterval;
    NSDateComponents *_referenceComponents;
    double _todaySinceReferenceDate;
    NSDateComponents *_todayDateComponents;
    NSString *_amString;
    NSString *_pmString;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    UIDatePicker *_datePickerDelegate;
    id _delegateOfDatePicker;
    int _numberOfDaysInCurrentMonth;
    int _expectedAMPM;
    NSDateComponents *_minDateComponents;
    NSDateComponents *_maxDateComponents;
    struct {
        unsigned int dateOrder:2;
        unsigned int timeOrder:2;
        unsigned int weekdayOrder:1;
        unsigned int staggerTimeIntervals:1;
        unsigned int loadingDateOrTime:1;
        unsigned int highlightsToday:1;
        unsigned int hasCustomCalendar:1;
        unsigned int reserved:23;
        unsigned int usesBlackChrome:1;
    } _datePickerFlags;
}

@property(nonatomic) id delegateOfDatePicker; // @synthesize delegateOfDatePicker=_delegateOfDatePicker;
@property(nonatomic) int minuteInterval; // @synthesize minuteInterval=_minuteInterval;
@property(copy, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(copy, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) int datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) BOOL usesBlackChrome;
- (void)_setHidesLabels:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)_createLabelWithString:(id)arg1 above:(id)arg2;
- (id)_createAccessoryViewWithText:(id)arg1 andFont:(id)arg2;
- (id)shadowColor;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (float)contentWidth;
- (void)_loadDesignatorStringsIfNeeded;
@property(nonatomic) double countDownDuration;
- (void)setDateComponents:(id)arg1;
- (id)dateComponents;
- (void)setHighlightsToday:(BOOL)arg1;
- (void)_setupWeekMonthDayCell:(id)arg1 atRow:(int)arg2 inColumn:(int)arg3;
- (void)_setupCell:(id)arg1 atRow:(int)arg2 inColumn:(int)arg3 withElementFlag:(unsigned int)arg4;
- (struct __CFDateFormatter *)_localDateFormatter;
- (id)_dateForWeekMonthDayRow:(int)arg1;
- (int)_eraForRow:(int)arg1;
- (int)_yearForRow:(int)arg1;
- (int)_monthForRow:(int)arg1;
- (void)_ensureTodayIsSet;
- (id)_todayTextColor;
- (void)_updateEnabledCells:(BOOL)arg1;
- (void)scrollerWillStartDragging:(id)arg1;
- (BOOL)_shouldEnableAmPmForValue:(int)arg1 column:(int)arg2;
- (BOOL)_shouldEnableWeekMonthDayForRow:(int)arg1;
- (BOOL)_shouldEnableYearForRow:(int)arg1;
- (BOOL)_shouldEnableHourForValue:(int)arg1 column:(int)arg2;
- (BOOL)_shouldEnableMinuteForValue:(int)arg1 column:(int)arg2;
- (BOOL)_scrollingAnyColumnExcept:(int)arg1;
- (BOOL)_shouldEnableMonthForRow:(int)arg1 column:(int)arg2;
- (BOOL)_shouldEnableDayForRow:(int)arg1 column:(int)arg2;
- (int)_hourForRow:(int)arg1;
- (int)_hourForRow:(int)arg1 in24HourTime:(BOOL)arg2;
- (int)_dayForRow:(int)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (void)_updateLabels:(BOOL)arg1;
- (id)_hoursString;
- (id)_minutesString;
- (id)_newFadeLabel:(id)arg1 toNewLabelWithString:(id)arg2 ifAnimated:(BOOL)arg3;
- (BOOL)_updateDateOrTime;
- (void)_setDateComponent:(id)arg1 withElement:(unsigned int)arg2;
- (int)_secondForRow:(int)arg1;
- (int)_minuteForRow:(int)arg1;
- (int)_selectedMinuteForColumn:(int)arg1;
- (int)_selectedHourForColumn:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)_loadDesignatorStrings;
- (void)pickerViewLoaded:(id)arg1;
- (void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(BOOL)arg3 notify:(BOOL)arg4;
- (void)_loadDateAnimated:(BOOL)arg1;
- (void)_updateRowInColumn:(int)arg1 toValue:(int)arg2 withRepeatingAmount:(int)arg3 element:(unsigned int)arg4 animated:(BOOL)arg5;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (int)_amPmValue;
- (int)_incrementedAmountForValue:(int)arg1 withElement:(unsigned int)arg2;
- (void)setStaggerTimeIntervals:(BOOL)arg1;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)_columnForElement:(unsigned int)arg1;
- (unsigned int)_elementForColumn:(int)arg1;
- (int)_numberOfDaysInWeek;
- (id)_hrMinFont;
- (id)_ampmCellFont;
- (id)_datePickerCellFont;
- (id)_sizedPickerCellFont;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (int)second;
- (int)minute;
- (int)hour;
- (void)setDate:(id)arg1 animated:(BOOL)arg2;
- (void)_setDate:(id)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
@property(readonly, nonatomic, getter=_hasCustomCalendar) BOOL hasCustomCalendar;
- (void)_updateBitsForDate:(id)arg1 andReload:(BOOL)arg2 animateIfNeeded:(BOOL)arg3;
- (void)_updateReferenceBits;
- (int)_numberOfDaysInDate:(id)arg1;
- (BOOL)_showingDate;
- (void)_doneLoadingDateOrTime;
- (int)_incrementForElement:(unsigned int)arg1;
- (id)pickerImageNamePrefix;
- (float)_tableRowHeight;
- (void)_datePickerReset:(id)arg1;
- (void)_todayChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


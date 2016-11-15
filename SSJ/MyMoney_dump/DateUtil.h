//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DateUtil : NSObject
{
}

+ (long long)quarterBetweenTwoDateFromDate:(id)arg1 toDate:(id)arg2;
+ (long long)weekBetweenTwoDateFromDate:(id)arg1 toDate:(id)arg2;
+ (long long)dayBetweenTwoDateFromDate:(id)arg1 toDate:(id)arg2;
+ (long long)monthBetweenTwoDateFromDate:(id)arg1 toDate:(id)arg2;
+ (long long)yearBetweenTwoDateFromDate:(id)arg1 toDate:(id)arg2;
+ (id)nextQuarterFromDate:(id)arg1 numOfQuarters:(unsigned long long)arg2;
+ (id)nextYearFromDate:(id)arg1 numOfYears:(unsigned long long)arg2;
+ (id)nextMonthFromDate:(id)arg1 numOfMonths:(unsigned long long)arg2;
+ (id)nextWeekFromDate:(id)arg1 numOfWeeks:(unsigned long long)arg2;
+ (id)nextDayFromDate:(id)arg1 numOfDays:(unsigned long long)arg2;
+ (id)dateFromYearMmonthDayString:(id)arg1;
+ (id)numOfDays:(unsigned long long)arg1 beforeDate:(id)arg2;
+ (id)numOfMonths:(unsigned long long)arg1 days:(unsigned long long)arg2 beforeDate:(id)arg3;
+ (id)numOfYears:(unsigned long long)arg1 months:(unsigned long long)arg2 days:(unsigned long long)arg3 beforeDate:(id)arg4;
+ (id)dateAfterNumOfDays:(unsigned long long)arg1 fromDate:(id)arg2;
+ (id)dateAfterNumOfMonths:(unsigned long long)arg1 days:(unsigned long long)arg2 fromDate:(id)arg3;
+ (id)dateAfterNumOfYears:(unsigned long long)arg1 months:(unsigned long long)arg2 days:(unsigned long long)arg3 fromDate:(id)arg4;
+ (long long)daysAfterDate:(id)arg1;
+ (_Bool)isAnotherDay:(id)arg1;
+ (id)formatFullLocalizedDate:(id)arg1;
+ (id)formatLocalizedDateWithoutYear:(id)arg1;
+ (id)formatDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (long long)compareRange:(id)arg1 start:(id)arg2 end:(id)arg3;
+ (id)formatDayString:(id)arg1;
+ (id)dayStringDateFormatter;
+ (id)formatWeekString:(id)arg1;
+ (id)weekStringDateFormatter;
+ (id)monthDayformatDateWithDate:(id)arg1;
+ (id)formatDateWithDate:(id)arg1;
+ (id)formatDateWithTimespan:(double)arg1;
+ (long long)timestampToHighPrecisionUInt:(double)arg1;
+ (id)localizedWeekOfDayFromTimestamp:(double)arg1;
+ (unsigned long long)weekOfDayFromTimestamp:(double)arg1;
+ (double)normalizeToDay:(double)arg1;
+ (double)normalizeToYear:(double)arg1;
+ (double)normalizeToMonth:(double)arg1;
+ (id)createDateFromYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (id)dateInfoWithTimespan:(double)arg1;
+ (_Bool)isMuteTimeWithDate:(id)arg1;
+ (_Bool)timeIs24HourFormat;
+ (_Bool)isZhLocaleIdentifier;
+ (id)RemindIntervals;
+ (id)MonthDays;
+ (id)WeekDaysDictionary;
+ (id)WeekDays;
+ (double)shiftTo13BiteTime:(double)arg1;
+ (double)shiftTo10BiteTime:(double)arg1;
+ (long long)localToGMT8ZoneTimeInterval;
+ (double)shiftFromGMT8Time:(double)arg1;
+ (double)shiftToGMT8Time:(double)arg1;
+ (id)timeSpanForMonth:(id)arg1 currentYearTime:(double)arg2;
+ (id)weeksForDate:(id)arg1 atMonthStart:(long long)arg2 onWeekStart:(long long)arg3;
+ (id)timeSpansFromDate:(id)arg1 toDate:(id)arg2 atMonthStart:(long long)arg3;
+ (id)thisYearMonthDataParametersUntil:(id)arg1 atMonthStart:(long long)arg2;
+ (double)monthStartTimeIntervalLastToDate:(id)arg1 atMonthStart:(long long)arg2;
+ (double)monthStartTimeIntervalNextToDate:(id)arg1 atMonthStart:(long long)arg2;
+ (double)monthStartTimeIntervalAtDate:(id)arg1 atMonthStart:(long long)arg2;
+ (double)monthStartTimeIntervalNextMonth:(long long)arg1 toDate:(id)arg2 atMonthStart:(long long)arg3;
+ (double)weekStartTimeIntervalAtDate:(id)arg1 atWeekStart:(long long)arg2;
+ (long long)shiftDay:(long long)arg1 atWeekStart:(long long)arg2;
+ (long long)weekDayAtYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (long long)endMonthOfSeasonMonth:(long long)arg1;
+ (long long)startMonthOfSeasonMonth:(long long)arg1;
+ (double)seasonEndTimeIntervel;
+ (double)seasonStartTimeIntervel;
+ (double)seasonEndTimeIntervelFor:(id)arg1;
+ (double)lastSeasonStartTimeIntervelFor:(id)arg1;
+ (double)seasonStartTimeIntervelFor:(id)arg1;
+ (double)todayEndTimeIntervel;
+ (double)todayStartTimeIntervel;
+ (double)endTimeIntervalAtYear:(long long)arg1;
+ (double)startTimeIntervalAtYear:(long long)arg1;
+ (double)curentMonthEndTimeInterval;
+ (double)currentMonthStartTimeInterval;
+ (_Bool)isLeapYear:(long long)arg1;
+ (long long)monthLength:(long long)arg1 month:(long long)arg2;
+ (id)dateFromComponents:(id)arg1;
+ (id)dateComponentsAtDate:(id)arg1;
+ (id)currentDateComponents;
+ (id)dateTimeWithLongStyleFromDate:(id)arg1;
+ (id)formatDateForWithMinute:(id)arg1;
+ (id)dateNameIfWithinThreeDays:(id)arg1;
+ (_Bool)isSameYearWithNow:(id)arg1;
+ (id)dateStringFor977WithDate:(id)arg1 hasTime:(_Bool)arg2;
+ (id)formatTimeAgoFromDate:(id)arg1;
+ (id)formatWithLongStyleFromDate:(id)arg1;
+ (id)monthDayStringFromDate:(id)arg1;
+ (id)yearMonthStringFromDate:(id)arg1;
+ (id)formatFromDateWithoutYear:(id)arg1;
+ (id)dateFromString:(id)arg1;
+ (id)completeStyleFormatFromDate:(id)arg1;
+ (id)formatFromDate:(id)arg1;
+ (double)timeIntervalAtYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 endOfDay:(_Bool)arg4;
+ (double)endTimeIntervalFromDate:(id)arg1;
+ (double)startTimeIntervalOfQuarterFromDate:(id)arg1;
+ (double)startTimeIntervalOfWeekFromDate:(id)arg1;
+ (double)startTimeIntervalOfDayFromDate:(id)arg1;
+ (double)startTimeIntervalOfMonthFromDate:(id)arg1;
+ (double)startTimeIntervalOfYearFromDate:(id)arg1;
+ (double)longTimeIntervalFromDate:(id)arg1;
+ (double)timeIntervalAtYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
+ (double)normalizeTimeIntervalFromDate:(id)arg1;
+ (id)gregorian;

@end


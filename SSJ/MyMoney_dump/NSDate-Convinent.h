//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (Convinent)
+ (id)sharedDateFormatter;
+ (id)sharedCalendar;
+ (void)initializeStatics;
- (id)string_a_HH_mm;
- (id)string_yyyy_MM_dd;
- (id)stringTimeDisplay;
- (id)string_yyyy_MM_dd_EEE;
- (id)stringTimesAgo;
- (long long)yearsAgo;
- (long long)monthsAgo;
- (long long)hoursAgo;
- (long long)minutesAgo;
- (long long)secondsAgo;
- (unsigned long long)daysAgoAgainstMidnight;
- (_Bool)isSameDay:(id)arg1;
- (unsigned long long)year;
- (unsigned long long)minute;
- (unsigned long long)hour;
- (id)stringWithFormat:(id)arg1;
@end


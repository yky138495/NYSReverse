//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface RecurrenceRuleVo : NSObject
{
    long long _oid;
    NSDate *_startDate;
    NSDate *_endDate;
    double _repeat_interval;
    NSString *_year;
    NSString *_month;
    NSString *_week;
    NSString *_day;
    NSString *_weekday;
    unsigned long long _type;
}

+ (id)ruleWithStartDate:(id)arg1 recurrenceType:(unsigned long long)arg2;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *weekday; // @synthesize weekday=_weekday;
@property(copy, nonatomic) NSString *day; // @synthesize day=_day;
@property(copy, nonatomic) NSString *week; // @synthesize week=_week;
@property(copy, nonatomic) NSString *month; // @synthesize month=_month;
@property(copy, nonatomic) NSString *year; // @synthesize year=_year;
@property(nonatomic) double repeat_interval; // @synthesize repeat_interval=_repeat_interval;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;

@end

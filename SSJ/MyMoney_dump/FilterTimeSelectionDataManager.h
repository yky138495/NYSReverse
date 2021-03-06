//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FilterTimeSelectionDataManager : NSObject
{
    NSArray *_timeSelections;
}

@property(retain, nonatomic) NSArray *timeSelections; // @synthesize timeSelections=_timeSelections;
- (void).cxx_destruct;
- (id)getCustomizedTimeSectionSelections;
- (id)getYearTimeSectionSelections;
- (id)getQuarterTimeSectionSelections;
- (id)getMonthTimeSectionSelections;
- (id)getWeekTimeSectionSelections;
- (id)getDayTimeSectionSelections;
- (id)getAllTimeSectionSelections;

@end


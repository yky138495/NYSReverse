//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SuperTzTimeRangeFilter.h"

@class TimeSpanIterator;

@interface SuperTzIteratorBasedTimeFilter : SuperTzTimeRangeFilter
{
    TimeSpanIterator *_timespanIterator;
}

- (void).cxx_destruct;
- (id)rangeInfoForCurrentTimespan;
- (id)timespanType;
- (id)descriptionFromRangeData:(id)arg1;
- (void)nextRange;
- (void)setupRangeWithDate:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DateInputButton, NSDate;

@protocol DateInputButtonDelegate <NSObject>
- (void)selectedDate:(NSDate *)arg1;
- (NSDate *)currentDate;

@optional
- (void)dateInputButtonDidTapClose:(DateInputButton *)arg1;
@end


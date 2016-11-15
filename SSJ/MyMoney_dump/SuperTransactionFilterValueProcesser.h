//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SuperTransactionFilterValueProcesser : NSObject
{
}

+ (id)timeTextWithTimePeriodType:(long long)arg1 accordingToBeginTime:(double)arg2 endTime:(double)arg3;
+ (id)timeTextWithTimePeriodType:(long long)arg1 andBeginTime:(double)arg2 andEndTime:(double)arg3;
+ (id)timeTextWithTimePeriodType:(long long)arg1 timeSpan:(id)arg2;
+ (id)timeSpanWithTimePeriodType:(long long)arg1 andBeginTime:(double)arg2 andEndTime:(double)arg3;
+ (id)getPlaceholderWithCategoryStr:(id)arg1 andTimeStr:(id)arg2 andIsCategoryChanged:(_Bool)arg3 andCellChangedMark:(long long)arg4;
+ (id)getPlaceholderInfoWithoutTitle:(id)arg1 titlePlaceholderIndex:(long long)arg2;
+ (id)calculateTimeWithTemplateTextModels:(id)arg1;
+ (id)getTimeTextByTimeConfig:(id)arg1 andTimeSpan:(id)arg2;
+ (id)multiFilterTextWithFirstLevelFilterItems:(id)arg1 WithSecondLevelFilterItems:(id)arg2 firstFullySelected:(_Bool)arg3 textLengthLimit:(long long)arg4;
+ (id)singleFilterTextWithFilterItems:(id)arg1 fullySelected:(_Bool)arg2 textLengthLimit:(long long)arg3;

@end

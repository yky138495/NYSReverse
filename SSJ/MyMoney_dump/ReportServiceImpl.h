//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ReportService.h"

@class NSString;

@interface ReportServiceImpl : NSObject <ReportService>
{
}

- (id)digestIdsFromVos:(id)arg1;
- (id)reportLiabilityDetail;
- (id)reportAssetDetail;
- (id)reportMemberExpenseVsIncomeWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)reportMonthCompareWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)reportMonthlyAssetInOutAndChange;
- (id)reportMonthExpenseWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)reportMonthIncomeWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)reportExpenseGroupBy:(int)arg1 startTime:(double)arg2 endTime:(double)arg3 categorys:(id)arg4 accounts:(id)arg5 projects:(id)arg6 members:(id)arg7 corporations:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 memo:(id)arg11 unSelectedSecondCategorys:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

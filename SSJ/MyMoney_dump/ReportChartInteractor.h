//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ReportChartViewControllerOutputProtocol.h"

@class NSString;

@interface ReportChartInteractor : NSObject <ReportChartViewControllerOutputProtocol>
{
    id <ReportChartInteractorOutputProtocol> _output;
}

@property(retain, nonatomic) id <ReportChartInteractorOutputProtocol> output; // @synthesize output=_output;
- (void).cxx_destruct;
- (void)fetchDatasForCompareMemberIncomeExpenseStartDate:(id)arg1 endDate:(id)arg2;
- (void)fetchDatas:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 categorys:(id)arg4 accounts:(id)arg5 projects:(id)arg6 corporations:(id)arg7 members:(id)arg8 minAmount:(id)arg9 maxAmount:(id)arg10 memo:(id)arg11 unSelectedSecondCategorys:(id)arg12;
- (void)fetchDatasForCompareIncomeExpenseStartDate:(id)arg1 endDate:(id)arg2 categorys:(id)arg3 accounts:(id)arg4 projects:(id)arg5 corporations:(id)arg6 members:(id)arg7 memo:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AccountVo, ExpenseSummary, NSString;

@interface FDAccountBookTemplateInfo : NSObject
{
    unsigned long long _infoType;
    AccountVo *_accountVo;
    long long _infoUnit;
    long long _dataType;
    ExpenseSummary *_expenseSummary;
}

+ (id)infoWithTypeKey:(id)arg1;
+ (id)infoWithType:(unsigned long long)arg1;
@property(retain, nonatomic) ExpenseSummary *expenseSummary; // @synthesize expenseSummary=_expenseSummary;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(nonatomic) long long infoUnit; // @synthesize infoUnit=_infoUnit;
@property(retain, nonatomic) AccountVo *accountVo; // @synthesize accountVo=_accountVo;
@property(nonatomic) unsigned long long infoType; // @synthesize infoType=_infoType;
- (void).cxx_destruct;
- (id)caculateAllInvestmentAccountMarketValue;
@property(readonly, copy, nonatomic) id infoValue;
@property(readonly, copy, nonatomic) NSString *infoKey;
@property(readonly, copy, nonatomic) NSString *infoLocalizeKey;
- (id)accountBalanceWithAccountVo:(id)arg1;
- (_Bool)isZhLocaleIdentifier;
- (id)getInfoValue;
- (id)getInfoKey;
- (id)getInfoLocalizeKey;
- (id)getNetAssets;
- (id)getTotalLiability;
- (id)getTotalAssets;
- (id)getBudget;
- (id)getBalance;
- (id)getAssetsWithUnit:(long long)arg1;
- (id)getExpenseSummaryWithUnit:(long long)arg1;
- (long long)dataTypeWithInfoType:(unsigned long long)arg1;
- (long long)infoUnitWithInfoType:(unsigned long long)arg1;
- (void)configAccountVoWithAccountName:(id)arg1;
- (void)configWithInfoType:(unsigned long long)arg1;
- (id)initWithInfoTypeKey:(id)arg1;
- (id)initWithInfoType:(unsigned long long)arg1;

@end


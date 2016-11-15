//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDecimalNumber, NSString;

@interface ProjectExpenseVo : NSObject
{
    long long _oid;
    NSString *_name;
    NSDecimalNumber *_flowInMoney;
    NSDecimalNumber *_flowOutMoney;
    double _lastTradeTime;
    double _lastUpdateTime;
    _Bool _isHidden;
    NSDecimalNumber *_lastTransAmount;
    NSString *_lastTransCategoryName;
}

@property _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(retain, nonatomic) NSString *lastTransCategoryName; // @synthesize lastTransCategoryName=_lastTransCategoryName;
@property(retain, nonatomic) NSDecimalNumber *lastTransAmount; // @synthesize lastTransAmount=_lastTransAmount;
@property double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSDecimalNumber *flowOutMoney; // @synthesize flowOutMoney=_flowOutMoney;
@property(retain, nonatomic) NSDecimalNumber *flowInMoney; // @synthesize flowInMoney=_flowInMoney;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property double lastTradeTime; // @synthesize lastTradeTime=_lastTradeTime;
@property long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;
- (id)balance;
- (_Bool)isModifyInRecentlyWeek;
- (_Bool)isExpensedInRecentlyWeek;

@end

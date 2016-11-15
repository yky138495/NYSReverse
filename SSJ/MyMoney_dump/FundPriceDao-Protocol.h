//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FundPrice, NSArray, NSString;

@protocol FundPriceDao <NSObject>
- (NSArray *)historyPricesWithFundCode:(NSString *)arg1;
- (_Bool)deleteHistoryPricesWithFundCode:(NSString *)arg1 before:(double)arg2;
- (_Bool)insertPriceHistory:(FundPrice *)arg1;
- (_Bool)updatePrice:(FundPrice *)arg1;
@end

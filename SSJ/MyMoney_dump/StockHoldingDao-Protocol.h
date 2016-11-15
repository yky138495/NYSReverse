//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, StockHolding;

@protocol StockHoldingDao <NSObject>
- (NSArray *)insertStockHoldings:(NSArray *)arg1;
- (NSDictionary *)holdingIdsByStockCodes:(NSArray *)arg1;
- (long long)holdingIdForStock:(NSString *)arg1 code:(NSString *)arg2;
- (NSDictionary *)holdingsWithIds:(NSArray *)arg1;
- (StockHolding *)holdingWithId:(long long)arg1;
- (NSArray *)allHoldings;
- (_Bool)deleteStockHolding:(long long)arg1;
- (long long)insertStockHolding:(StockHolding *)arg1;
@end


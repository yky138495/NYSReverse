//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol StockRemoteService <NSObject>
- (void)fetchStockLatestPrice:(NSArray *)arg1 success:(void (^)(NSArray *))arg2 failure:(void (^)(NSError *))arg3;
- (void)fetchQuotesForIndexSuccess:(void (^)(NSDictionary *))arg1 failure:(void (^)(NSError *))arg2;
- (void)fetchQuotesForStockWithCode:(NSString *)arg1 atDate:(double)arg2 success:(void (^)(StockQuoteVo *))arg3 failure:(void (^)(NSError *))arg4;
- (void)fetchQuotesForStocks:(NSArray *)arg1 success:(void (^)(NSDictionary *))arg2 failure:(void (^)(NSError *))arg3;
- (void)fetchAllStockSuccess:(void (^)(NSArray *))arg1 failure:(void (^)(NSError *))arg2;
@end

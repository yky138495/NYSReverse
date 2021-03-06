//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface StockRemoteServiceWrapper : NSObject
{
}

+ (void)unregisterFetchLatestPriceForStock:(id)arg1;
+ (void)registerFetchLatestPriceForStock:(id)arg1 action:(SEL)arg2;
+ (void)unregisterFetchQuotesForStockWithCode:(id)arg1;
+ (void)registerFetchQuotesForStockWithCode:(id)arg1 action:(SEL)arg2;
+ (void)unregisterFetchQuotesForIndex:(id)arg1;
+ (void)registerFetchQuotesForIndex:(id)arg1 action:(SEL)arg2;
+ (void)unregisterFetchQuotesForStocks:(id)arg1;
+ (void)registerFetchQuotesForStocks:(id)arg1 action:(SEL)arg2;
+ (void)unregisterFetchAllStock:(id)arg1;
+ (void)registerFetchAllStock:(id)arg1 action:(SEL)arg2;
+ (void)fetchLatestPriceForStocks:(id)arg1 responseReceiver:(id)arg2;
+ (void)fetchQuotesForStockWithCode:(id)arg1 atDate:(double)arg2 responseReceiver:(id)arg3;
+ (void)fetchQuotesForIndex:(id)arg1;
+ (void)fetchQuotesForStocks:(id)arg1 responseReceiver:(id)arg2;
+ (void)fetchAllStock:(id)arg1;

@end


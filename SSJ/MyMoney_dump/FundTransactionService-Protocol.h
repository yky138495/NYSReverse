//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FundTransactionVo, NSArray, NSDictionary, NSString;

@protocol FundTransactionService <NSObject>
- (NSArray *)adjustFunds:(NSArray *)arg1 withLog:(NSString *)arg2;
- (NSArray *)bonusAndPurchaseFunds:(NSArray *)arg1 withLog:(NSString *)arg2;
- (NSArray *)bonusFunds:(NSArray *)arg1 withLog:(NSString *)arg2;
- (NSArray *)redeemFunds:(NSArray *)arg1 withLog:(NSString *)arg2;
- (NSArray *)purchaseFunds:(NSArray *)arg1 withLog:(NSString *)arg2;
- (long long)purchase:(FundTransactionVo *)arg1 log:(NSString *)arg2;
- (NSDictionary *)getFundTransIDDictionary;
- (NSArray *)queryTransactionsWithHoldingId:(long long)arg1;
- (NSDictionary *)fundTransactionsWithTransactionIds:(NSArray *)arg1;
- (FundTransactionVo *)transactionWithFID:(long long)arg1;
- (void)updateTransaction:(FundTransactionVo *)arg1 oldAccountID:(long long)arg2;
- (void)deleteOnlyFundTransactionWithFID:(long long)arg1;
- (void)deleteTransactionWithFID:(long long)arg1;
- (NSArray *)transactionsWithHoldingId:(long long)arg1;
- (long long)adjust:(FundTransactionVo *)arg1;
- (long long)bonusAndPurchase:(FundTransactionVo *)arg1;
- (long long)bonus:(FundTransactionVo *)arg1;
- (long long)redeem:(FundTransactionVo *)arg1;
- (long long)purchase:(FundTransactionVo *)arg1;
- (NSArray *)openFundsPositions:(NSArray *)arg1;
- (long long)openPosition:(FundTransactionVo *)arg1;
- (long long)queryPosition:(NSString *)arg1 code:(NSString *)arg2;
@end


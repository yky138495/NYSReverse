//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CorporationExpenseVo, CorporationVo, NSArray, NSDate, NSDictionary, NSString;

@protocol CorporationService <NSObject>
- (NSDictionary *)corporationExpenseTotalIncomeAndPayoutInfo;
- (CorporationExpenseVo *)corporationExpenseVoWithId:(long long)arg1;
- (NSDate *)lastestTradeTimeByCorporationId:(long long)arg1;
- (NSDate *)oldestTradeTimeByCorporationId:(long long)arg1;
- (NSArray *)corporationExpensesWithoutHiddenOrderByLastUpdateTime;
- (NSArray *)corporationExpensesOrderByLastUpdateTime;
- (NSArray *)corporationExpensesWithoutHidden;
- (NSArray *)corporationExpenses;
- (_Bool)setCorporation:(long long)arg1 withHidden:(_Bool)arg2;
- (NSArray *)listOfLendCenterCreditors;
- (CorporationVo *)corporationByName:(NSString *)arg1;
- (CorporationVo *)corporationById:(long long)arg1;
- (CorporationVo *)creditorWithName:(NSString *)arg1;
- (NSArray *)listCreditorWithoutHidden;
- (NSArray *)listCreditor;
- (NSArray *)listCorporationWithCorporationIds:(NSArray *)arg1;
- (NSArray *)listCorporationWithoutHidden;
- (NSArray *)listCorporation;
- (_Bool)existTransactionWithCorporationId:(long long)arg1;
- (_Bool)deleteCreditor:(long long)arg1 error:(id *)arg2;
- (_Bool)deleteCorporation:(long long)arg1 error:(id *)arg2;
- (void)updateCreditorOrders:(NSArray *)arg1;
- (void)updateCorporationOrders:(NSArray *)arg1;
- (_Bool)updateCreditorName:(NSString *)arg1 byId:(long long)arg2;
- (_Bool)updateCorporationName:(NSString *)arg1 byId:(long long)arg2;
- (long long)addCreditor:(NSString *)arg1;
- (long long)addCorporation:(NSString *)arg1;
@end

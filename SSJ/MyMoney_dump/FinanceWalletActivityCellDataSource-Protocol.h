//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FinanceWalletActivityCell, NSIndexPath, NSString, UIColor;

@protocol FinanceWalletActivityCellDataSource <NSObject>
- (NSIndexPath *)indexPathForFinanceWalletActivityCell:(FinanceWalletActivityCell *)arg1;
- (UIColor *)contentTextColorFinanceWalletActivityCell:(FinanceWalletActivityCell *)arg1 indexPath:(NSIndexPath *)arg2;
- (NSString *)detailTextForFinanceWalletActivityCell:(FinanceWalletActivityCell *)arg1 indexPath:(NSIndexPath *)arg2;
- (NSString *)titleForFinanceWalletActivityCell:(FinanceWalletActivityCell *)arg1 indexPath:(NSIndexPath *)arg2;
- (NSString *)imageStrForFinanceWalletActivityCell:(FinanceWalletActivityCell *)arg1 indexPath:(NSIndexPath *)arg2;
@end


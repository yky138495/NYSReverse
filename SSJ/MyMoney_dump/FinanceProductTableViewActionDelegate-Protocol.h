//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FinanceMarketProductListBottomModel, FinanceMarketProductListNoticeModel, MarketProduct;

@protocol FinanceProductTableViewActionDelegate <NSObject>
- (void)tableViewDidSelectedBottomCell:(FinanceMarketProductListBottomModel *)arg1;
- (void)tableViewDidSelectedProduct:(MarketProduct *)arg1;
- (void)tableViewDidSelectedNotice:(FinanceMarketProductListNoticeModel *)arg1;
@end


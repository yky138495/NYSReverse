//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "CurrencySelectionViewControlleDelegate.h"
#import "QueryServiceDelegate.h"

@class NSMutableArray, NSString, QueryService;

@interface ExchangeViewController : BaseTableViewController <QueryServiceDelegate, CurrencySelectionViewControlleDelegate>
{
    NSString *_baseCurreifncyCode;
    NSMutableArray *_exchangeRateQuotes;
    QueryService *_queryService;
    _Bool _isSetCurrency;
    NSString *_baseCurrencyCode;
    id <ExchangeViewControllerDelegate> _delegate;
}

@property(retain, nonatomic) NSMutableArray *exchangeRateQuotes; // @synthesize exchangeRateQuotes=_exchangeRateQuotes;
@property(nonatomic) __weak id <ExchangeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QueryService *queryService; // @synthesize queryService=_queryService;
@property(retain, nonatomic) NSString *baseCurrencyCode; // @synthesize baseCurrencyCode=_baseCurrencyCode;
- (void).cxx_destruct;
- (void)didSelectCurrencyCode:(id)arg1;
- (id)currencyCodesFromPlist;
- (void)fetchExchangeQuotes;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)service:(id)arg1 queryExchangeSuccessfully:(_Bool)arg2 withMessage:(id)arg3;
- (id)init;

@end


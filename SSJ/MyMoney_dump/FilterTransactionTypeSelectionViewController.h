//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FilterBaseSelectionViewController.h"

@class NSArray, NSMutableDictionary;

@interface FilterTransactionTypeSelectionViewController : FilterBaseSelectionViewController
{
    NSArray *_transactionTypes;
    NSMutableDictionary *_selectedTransactionTypes;
}

@property(retain, nonatomic) NSMutableDictionary *selectedTransactionTypes; // @synthesize selectedTransactionTypes=_selectedTransactionTypes;
@property(retain, nonatomic) NSArray *transactionTypes; // @synthesize transactionTypes=_transactionTypes;
- (void).cxx_destruct;
- (void)didSelectCommonSelectionCellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 commonSelectionCellForRowAtIndexPath:(id)arg2;
- (void)batchSelect:(_Bool)arg1;
- (unsigned long long)numberOfSelectedData;
- (unsigned long long)numberOfData;
- (id)init;

@end


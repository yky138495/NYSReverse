//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CurrencyFormatter, NSDateFormatter, NSMutableArray, NSString, UITableView, UIView;

@interface BillBatchDeleteViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    NSMutableArray *_dataArray;
    UITableView *_tableView;
    UIView *_tableHeaderView;
    CurrencyFormatter *_currencyFormatter;
    NSDateFormatter *_dateFormatter;
    NSString *_systemCurrencyCode;
    id <BillBatchDeleteViewControllerDelegate> _delegate;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <BillBatchDeleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) CurrencyFormatter *currencyFormatter; // @synthesize currencyFormatter=_currencyFormatter;
@property(copy, nonatomic) NSString *systemCurrencyCode; // @synthesize systemCurrencyCode=_systemCurrencyCode;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)showRightBarButtonItemAndTableHeaderViewState;
- (void)showChoosedBillNum:(long long)arg1;
- (long long)numOfChoosedBill;
- (void)removeAnimate;
- (void)addExperianceIfAvaliable;
- (void)didFinishOfBillBatchDelete;
- (void)deleteChoosedBill;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)billItemArray:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)loadView;
- (id)createTableHeaderView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


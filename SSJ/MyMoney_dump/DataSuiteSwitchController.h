//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView, UITableViewCell;

@interface DataSuiteSwitchController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <DataSuiteSwitchControllerDelegate> _delegate;
    NSMutableArray *_dataSuites;
    NSString *_currentDataSuite;
    UITableViewCell *_selectedCell;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UITableViewCell *selectedCell; // @synthesize selectedCell=_selectedCell;
@property(retain, nonatomic) NSString *currentDataSuite; // @synthesize currentDataSuite=_currentDataSuite;
@property(retain, nonatomic) NSMutableArray *dataSuites; // @synthesize dataSuites=_dataSuites;
@property(nonatomic) __weak id <DataSuiteSwitchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backAction;
- (void)setUserDefaultsCurrentDataSuite:(id)arg1;
- (void)switchDataSuiteToDataSuite:(id)arg1 withTable:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)isUseDefaultDataSuite;
- (_Bool)isValatePath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


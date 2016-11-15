//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface AccountBookHelpController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_guides;
    _Bool _isShowWithDifferenceGuidePushed;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isShowWithDifferenceGuidePushed; // @synthesize isShowWithDifferenceGuidePushed=_isShowWithDifferenceGuidePushed;
@property(retain, nonatomic) NSMutableArray *guides; // @synthesize guides=_guides;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initalTableDict;
- (void)closeAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTabSettingViewController.h"

@class SyncAccelerationTimeVo;

@interface HistoryDataCompatibleController : BaseTabSettingViewController
{
    _Bool _hasFinishSync;
    SyncAccelerationTimeVo *_syncAccelerationTimeVo;
}

@property(retain, nonatomic) SyncAccelerationTimeVo *syncAccelerationTimeVo; // @synthesize syncAccelerationTimeVo=_syncAccelerationTimeVo;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForLoanHandleSectionRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForProjectDataHandleSectionRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end


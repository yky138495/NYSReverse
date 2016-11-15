//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

@class ThirdPartyAuthorizedService, ThirdPartyBindManager;

@interface FDPersonalAccountBindViewController : BaseTableViewController
{
    CDUnknownBlockType _thirdPartyInfoDidChanged;
    ThirdPartyBindManager *_bindManager;
    ThirdPartyAuthorizedService *_authorizedService;
}

@property(retain, nonatomic) ThirdPartyAuthorizedService *authorizedService; // @synthesize authorizedService=_authorizedService;
@property(retain, nonatomic) ThirdPartyBindManager *bindManager; // @synthesize bindManager=_bindManager;
@property(copy, nonatomic) CDUnknownBlockType thirdPartyInfoDidChanged; // @synthesize thirdPartyInfoDidChanged=_thirdPartyInfoDidChanged;
- (void).cxx_destruct;
- (void)setupTableViewFooter;
- (void)showNotifyMessage:(id)arg1;
- (id)viewModelForIndexPath:(id)arg1;
- (id)unbindNoticeForPlatform:(unsigned long long)arg1;
- (id)cannotUnbindNoticeForPlatform:(unsigned long long)arg1;
- (void)saveChangedViewModel:(id)arg1 indexPath:(id)arg2;
- (void)bindThirdPartyAccount:(id)arg1 indexPath:(id)arg2;
- (void)unbindThirdPartyAccount:(id)arg1 indexPath:(id)arg2;
- (void)handleBindCellClick:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UITextField;

@interface SecureEmailViewController : BaseTableViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    UITextField *_emailTextField;
}

@property(retain, nonatomic) UITextField *emailTextField; // @synthesize emailTextField=_emailTextField;
- (void).cxx_destruct;
- (void)delayDismisDSAlertView;
- (void)saveAction:(id *)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)newTextField;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


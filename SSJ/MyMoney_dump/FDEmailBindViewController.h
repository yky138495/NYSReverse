//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "AutoCompleteViewDelegate.h"
#import "UITextFieldDelegate.h"

@class AutoChangeStateButton, AutoCompleteTextField, NSArray, NSString;

@interface FDEmailBindViewController : BaseTableViewController <AutoCompleteViewDelegate, UITextFieldDelegate>
{
    NSArray *_autocompEmailList;
    _Bool _emailBind;
    CDUnknownBlockType _completionBlock;
    AutoChangeStateButton *_bindButton;
    AutoCompleteTextField *_emailTextField;
    NSString *_account;
    NSString *_password;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property(retain, nonatomic) AutoCompleteTextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain, nonatomic) AutoChangeStateButton *bindButton; // @synthesize bindButton=_bindButton;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool emailBind; // @synthesize emailBind=_emailBind;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)bindDoneAction:(id)arg1;
- (void)skipBindAction:(id)arg1;
- (void)backAction:(id)arg1;
- (id)autoCompleteViewDataSource;
- (void)setUpTableViewFooter;
- (void)setUpTableViewHeader;
- (void)setUpNavigationBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 password:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


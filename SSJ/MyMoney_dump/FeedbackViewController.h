//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AutoCompleteViewDelegate.h"
#import "FeedbackConnectionDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextViewDelegate.h"

@class AutoCompleteTextField, FeedbackConnection, KDTextView, NSArray, NSString, SyncCenterUI, UIBarButtonItem, UIButton, UILabel, UIView;

@interface FeedbackViewController : UIViewController <UIAlertViewDelegate, AutoCompleteViewDelegate, FeedbackConnectionDelegate, UITextViewDelegate>
{
    UIBarButtonItem *_sendItem;
    FeedbackConnection *_feedbackConnection;
    KDTextView *_inputTextView;
    UIButton *_hideKeyboardBtn;
    UIView *_contentView;
    NSArray *emailsProviders;
    _Bool _isModalView;
    _Bool _hasShowQQTipDialog;
    int _feedbackTag;
    AutoCompleteTextField *_emailTextField;
    UILabel *_placeHolderLabel;
    UIView *_segmentControl;
    SyncCenterUI *_syncCenterUI;
}

@property(nonatomic) _Bool hasShowQQTipDialog; // @synthesize hasShowQQTipDialog=_hasShowQQTipDialog;
@property(retain, nonatomic) SyncCenterUI *syncCenterUI; // @synthesize syncCenterUI=_syncCenterUI;
@property(nonatomic) int feedbackTag; // @synthesize feedbackTag=_feedbackTag;
@property(retain, nonatomic) UIView *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(nonatomic) _Bool isModalView; // @synthesize isModalView=_isModalView;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) AutoCompleteTextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *hideKeyboardBtn; // @synthesize hideKeyboardBtn=_hideKeyboardBtn;
@property(retain, nonatomic) FeedbackConnection *feedbackConnection; // @synthesize feedbackConnection=_feedbackConnection;
@property(retain, nonatomic) UIBarButtonItem *sendItem; // @synthesize sendItem=_sendItem;
@property(retain, nonatomic) KDTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
- (void).cxx_destruct;
- (void)showManualFixSyncErrorView;
- (void)uploadDataAction;
- (void)segmentAction:(id)arg1;
- (void)backAction;
- (id)autoCompleteViewDataSource;
- (void)feedbackConnection:(id)arg1 didSuccessWithString:(id)arg2;
- (void)feedbackConnection:(id)arg1 didFailWithError:(id)arg2;
- (void)delayRemoveDSViewSuccess:(unsigned long long)arg1;
- (void)delayRemoveDSViewAction;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)actionSync;
- (void)syncAction;
- (_Bool)isDemoMode;
- (_Bool)hasSync;
- (void)sendFeedBackRequest;
- (_Bool)checkIfHasQQNumber;
- (void)sendFeedback;
- (_Bool)isRestoreCommmand;
- (void)sendAction:(id)arg1;
- (_Bool)isAllConditionValidate;
- (_Bool)hasMessagebody;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)setNavigationItemsHidden:(_Bool)arg1;
- (void)viewDidLoad;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)hideKeyboardAction;
- (void)addManualFixSyncErrorButton;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (id)initWithModalView:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

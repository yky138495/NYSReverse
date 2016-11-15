//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDMobileCaptchaGetViewController.h"

@class UILabel, UIView;

@interface FDMobileBindViewController : FDMobileCaptchaGetViewController
{
    long long _whenDoneType;
    id <FDMobileBindViewControllerDelegate> _delegate;
    CDUnknownBlockType _callback;
    UIView *_bottomNoticeView;
    UILabel *_bottomNoticeLabel;
}

@property(retain, nonatomic) UILabel *bottomNoticeLabel; // @synthesize bottomNoticeLabel=_bottomNoticeLabel;
@property(retain, nonatomic) UIView *bottomNoticeView; // @synthesize bottomNoticeView=_bottomNoticeView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak id <FDMobileBindViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long whenDoneType; // @synthesize whenDoneType=_whenDoneType;
- (void).cxx_destruct;
- (void)addVerifyPhoneNumCredit;
- (void)bindMobile:(id)arg1 account:(id)arg2 password:(id)arg3 captcha:(id)arg4;
- (void)checkCaptcha:(id)arg1 account:(id)arg2 password:(id)arg3 bindMobile:(id)arg4;
- (void)buttonDidClick;
- (void)sendVerificationCodeRequest;
- (id)doneButtonTitle;
- (void)popToRoot;
- (void)backAction;
- (void)dismiss;
- (void)handleRightBarButtonItemTapped:(id)arg1;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


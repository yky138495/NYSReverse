//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UILabel;

@interface FindPasswordByTelController : UIViewController
{
    NSString *_tel;
    UILabel *_descriptionLabel;
    UIButton *_resendButton;
}

@property(retain, nonatomic) UIButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)countdown_callback:(id)arg1;
- (void)resend_click:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

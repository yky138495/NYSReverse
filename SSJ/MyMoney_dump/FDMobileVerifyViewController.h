//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FDMobileCaptchaGetViewController.h"

@class NSString;

@interface FDMobileVerifyViewController : FDMobileCaptchaGetViewController
{
    NSString *_bindedMobile;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *bindedMobile; // @synthesize bindedMobile=_bindedMobile;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)buttonDidClick;
- (void)sendVerificationCodeRequest;
- (id)doneButtonTitle;
- (void)viewDidLoad;

@end


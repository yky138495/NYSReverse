//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FDActionSheetDelegate.h"

@class NSString, UIButton, UILabel;

@interface FDMobileBindManagerViewController : UIViewController <FDActionSheetDelegate>
{
    NSString *_bindedMobile;
    CDUnknownBlockType _callback;
    UILabel *_promptLabel;
    UILabel *_emailLabel;
    UIButton *_rebindButton;
}

@property(nonatomic) __weak UIButton *rebindButton; // @synthesize rebindButton=_rebindButton;
@property(nonatomic) __weak UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(nonatomic) __weak UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *bindedMobile; // @synthesize bindedMobile=_bindedMobile;
- (void).cxx_destruct;
- (void)fdActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)unbindAction;
- (void)rebindAction:(id)arg1;
- (void)rightBarItemClick;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


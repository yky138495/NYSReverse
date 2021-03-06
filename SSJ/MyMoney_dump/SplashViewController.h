//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "splashViewDelegate.h"

@class NSString, SplashConfigVo, SplashView, UILabel;

@interface SplashViewController : UIViewController <splashViewDelegate>
{
    SplashConfigVo *_config;
    id <SplashViewControllerDelegate> _delegate;
    SplashView *_splashView;
    UILabel *_headTitleLabel;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *headTitleLabel; // @synthesize headTitleLabel=_headTitleLabel;
@property(retain, nonatomic) SplashView *splashView; // @synthesize splashView=_splashView;
@property(nonatomic) __weak id <SplashViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SplashConfigVo *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)splashIsDoneWithRedirect:(unsigned long long)arg1;
- (id)splashImageWithPath:(id)arg1;
- (void)updateViewConstraints;
- (void)initSubviews;
- (void)showWithConfig:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


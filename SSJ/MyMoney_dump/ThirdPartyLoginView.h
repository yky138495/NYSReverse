//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton, UILabel;

@interface ThirdPartyLoginView : UIView
{
    UIButton *_weixiButton;
    UIButton *_weiboButton;
    UIButton *_qqButton;
    UILabel *_promptLabel;
    NSLayoutConstraint *_weixinTrailingConstraint;
    NSLayoutConstraint *_weixinWidthConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *weixinWidthConstraint; // @synthesize weixinWidthConstraint=_weixinWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *weixinTrailingConstraint; // @synthesize weixinTrailingConstraint=_weixinTrailingConstraint;
@property(nonatomic) __weak UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) __weak UIButton *qqButton; // @synthesize qqButton=_qqButton;
@property(nonatomic) __weak UIButton *weiboButton; // @synthesize weiboButton=_weiboButton;
@property(nonatomic) __weak UIButton *weixiButton; // @synthesize weixiButton=_weixiButton;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)updateConstraints;
- (void)hideWeixiButton:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


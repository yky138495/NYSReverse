//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface ThirdPartyInfoView : UIView
{
    UIImageView *_emailImageView;
    UIImageView *_wechatImageView;
    UIImageView *_qqImageView;
    UIImageView *_weiboImageView;
}

@property(retain, nonatomic) UIImageView *weiboImageView; // @synthesize weiboImageView=_weiboImageView;
@property(retain, nonatomic) UIImageView *qqImageView; // @synthesize qqImageView=_qqImageView;
@property(retain, nonatomic) UIImageView *wechatImageView; // @synthesize wechatImageView=_wechatImageView;
@property(retain, nonatomic) UIImageView *emailImageView; // @synthesize emailImageView=_emailImageView;
- (void).cxx_destruct;
- (struct CGSize)suggestViewSize;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configWithViewModel:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface DialogNoticeView : UIView
{
    UILabel *contentLabel;
    UIImageView *smile;
    UIButton *_okButton;
    UIButton *_doButton;
    NSString *_titleString;
    UILabel *_titleLabel;
}

+ (id)showSyncNoticeViewOnView:(id)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) UIButton *doButton; // @synthesize doButton=_doButton;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIImageView *smile; // @synthesize smile;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showOnView:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


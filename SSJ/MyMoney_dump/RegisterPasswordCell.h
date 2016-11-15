//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UITextField, UIView;

@interface RegisterPasswordCell : UITableViewCell
{
    _Bool _isEyeClose;
    UITextField *_passwordField;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    UIImageView *_eyeImageView;
    UIButton *_eyeButton;
}

@property(nonatomic) _Bool isEyeClose; // @synthesize isEyeClose=_isEyeClose;
@property(retain, nonatomic) UIButton *eyeButton; // @synthesize eyeButton=_eyeButton;
@property(retain, nonatomic) UIImageView *eyeImageView; // @synthesize eyeImageView=_eyeImageView;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(retain, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordField;
- (void).cxx_destruct;
- (void)initBottomSeparator;
- (void)initTopSeparator;
- (void)initPasswordField;
- (void)initEye;
- (void)initSubviews;
- (void)handleEyeButton;
- (void)updateEyeImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisterKVO;
- (void)registerKVO;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class ClickThroughView, UIButton, UIImageView, UIView;

@interface PreBaseInputViewController : UIViewController
{
    UIButton *_editButton;
    UIButton *_addButton;
    UIButton *_closeButton;
    UIImageView *_middleLineImageView;
    UIView *_topLineView;
    id <BaseInputDelegate> _delegate;
    ClickThroughView *_barView;
    UIView *_contentView;
}

+ (id)barButtonBackgroundImageWithUIRectCorners:(unsigned long long *)arg1;
+ (id)rightBarButtonBackgroundImageWithColor:(id)arg1;
+ (id)leftBarButtonBackgroundImageWithColor:(id)arg1;
+ (id)barButtonBackgroundImageWithColor:(id)arg1;
+ (id)barButtonBackgroundImage;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) ClickThroughView *barView; // @synthesize barView=_barView;
@property(nonatomic) __weak id <BaseInputDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *middleLineImageView; // @synthesize middleLineImageView=_middleLineImageView;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
- (void).cxx_destruct;
- (void)addTabAction;
- (void)editTapAction;
- (void)closeTapAction;
- (id)stretchableRightBarButtonBackgroundImageWithColor:(id)arg1;
- (id)stretchableLeftBarButtonBackgroundImageWithColor:(id)arg1;
- (id)stretchableBarButtonBackgroundImageWithColor:(id)arg1;
- (void)dealloc;
- (id)addButtonWithNormalImage:(id)arg1 highlightedImage:(id)arg2 selectedImage:(id)arg3;
- (id)editButtonWithNormalImage:(id)arg1 highlightedImage:(id)arg2 selectedImage:(id)arg3;
- (id)initWithFeature:(unsigned long long)arg1;

@end


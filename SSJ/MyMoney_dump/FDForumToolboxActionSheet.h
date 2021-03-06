//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UILabel;

@interface FDForumToolboxActionSheet : UIView
{
    id <FDForumToolboxActionSheetDelegate> _delegate;
    UIView *_bgView;
    UIView *_actionSheetView;
    UIView *_seperatorView;
    UILabel *_seperatorLabel;
    UIButton *_cancelButton;
    NSMutableArray *_toolButtons;
    NSMutableArray *_shareButtons;
}

+ (id)customActionSheet;
@property(copy, nonatomic) NSMutableArray *shareButtons; // @synthesize shareButtons=_shareButtons;
@property(copy, nonatomic) NSMutableArray *toolButtons; // @synthesize toolButtons=_toolButtons;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *seperatorLabel; // @synthesize seperatorLabel=_seperatorLabel;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) UIView *actionSheetView; // @synthesize actionSheetView=_actionSheetView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <FDForumToolboxActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleCancelButtonAction:(id)arg1;
- (void)handleShareButtonAction:(id)arg1;
- (void)handleToolButtonAction:(id)arg1;
- (id)shareButtonWithIndex:(long long)arg1;
- (id)toolButtonWithIndex:(long long)arg1;
- (void)creatShareButton;
- (void)creatToolButton;
- (void)startButtonAnimation;
- (void)bgViewTap:(id)arg1;
- (void)layoutSubviews;
- (void)dismiss:(_Bool)arg1;
- (void)showOnView:(id)arg1 animation:(_Bool)arg2;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end


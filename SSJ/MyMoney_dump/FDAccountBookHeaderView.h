//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class NSString, UIButton, UILabel, UIView;

@interface FDAccountBookHeaderView : UITableViewHeaderFooterView
{
    _Bool _isDidSetContstraint;
    _Bool _isSideslipping;
    _Bool _isLocalAccountBook;
    _Bool _titleShouldCentered;
    _Bool _shouldShowTopLine;
    _Bool _isSharedCenter;
    UIButton *_upgradeButton;
    UIView *_topLineView;
    UILabel *_categoricalTextLabel;
}

+ (id)identifier;
@property(retain, nonatomic) UILabel *categoricalTextLabel; // @synthesize categoricalTextLabel=_categoricalTextLabel;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIButton *upgradeButton; // @synthesize upgradeButton=_upgradeButton;
@property(nonatomic) _Bool isSharedCenter; // @synthesize isSharedCenter=_isSharedCenter;
@property(nonatomic) _Bool shouldShowTopLine; // @synthesize shouldShowTopLine=_shouldShowTopLine;
@property(nonatomic) _Bool titleShouldCentered; // @synthesize titleShouldCentered=_titleShouldCentered;
@property(nonatomic) _Bool isLocalAccountBook; // @synthesize isLocalAccountBook=_isLocalAccountBook;
@property(nonatomic) _Bool isSideslipping; // @synthesize isSideslipping=_isSideslipping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
- (void)setupTopLineViewLayout;
- (void)setupUpgradeButtonLayout;
- (void)setupCategoricalTextLabelLayoutInShareCenter;
- (void)setupCategoricalTextLabelLayout;
- (void)setupUpgradeButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end


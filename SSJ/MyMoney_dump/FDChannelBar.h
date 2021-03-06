//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class CAGradientLayer, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIButton, UIColor, UIFont, UIScrollView;

@interface FDChannelBar : UIView <UIScrollViewDelegate>
{
    _Bool _showMask;
    _Bool _deselected;
    UIScrollView *_scrollView;
    UIButton *_rightButton;
    id <FDChannelBarDelegate> _delegate;
    NSArray *_channelTitles;
    unsigned long long _selectedIndex;
    UIButton *_selectedItem;
    double _itemWidth;
    double _itemSpacing;
    double _itemScale;
    UIFont *_itemFont;
    UIColor *_itemSelectedColor;
    UIColor *_itemNomalColor;
    CAGradientLayer *_shadowLayer;
    CAGradientLayer *_leftGradientLayer;
    CAGradientLayer *_rightGradientLayer;
    double _leftMargin;
    double _rightMargin;
    double _gradientWidth;
    NSMutableArray *_frameList;
    NSMutableDictionary *_visibleDict;
    NSMutableSet *_cacheSet;
    NSMutableArray *_indexList;
}

@property(retain, nonatomic) NSMutableArray *indexList; // @synthesize indexList=_indexList;
@property(retain, nonatomic) NSMutableSet *cacheSet; // @synthesize cacheSet=_cacheSet;
@property(retain, nonatomic) NSMutableDictionary *visibleDict; // @synthesize visibleDict=_visibleDict;
@property(retain, nonatomic) NSMutableArray *frameList; // @synthesize frameList=_frameList;
@property(nonatomic) double gradientWidth; // @synthesize gradientWidth=_gradientWidth;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) CAGradientLayer *rightGradientLayer; // @synthesize rightGradientLayer=_rightGradientLayer;
@property(retain, nonatomic) CAGradientLayer *leftGradientLayer; // @synthesize leftGradientLayer=_leftGradientLayer;
@property(retain, nonatomic) CAGradientLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic, getter=isDeselected) _Bool deselected; // @synthesize deselected=_deselected;
@property(nonatomic) _Bool showMask; // @synthesize showMask=_showMask;
@property(retain, nonatomic) UIColor *itemNomalColor; // @synthesize itemNomalColor=_itemNomalColor;
@property(retain, nonatomic) UIColor *itemSelectedColor; // @synthesize itemSelectedColor=_itemSelectedColor;
@property(retain, nonatomic) UIFont *itemFont; // @synthesize itemFont=_itemFont;
@property(nonatomic) double itemScale; // @synthesize itemScale=_itemScale;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(readonly, nonatomic) UIButton *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *channelTitles; // @synthesize channelTitles=_channelTitles;
@property(nonatomic) __weak id <FDChannelBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (_Bool)isNeedDisplayWithFrame:(struct CGRect)arg1 preloading:(_Bool)arg2;
- (_Bool)isItemNeedDisplayWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeWithTitle:(id)arg1;
- (void)channelItemClick:(id)arg1;
- (id)dequeueReusableItem;
- (id)createItemAtIndex:(unsigned long long)arg1;
- (id)loadItemAtIndex:(long long)arg1;
- (void)resetFramesForDefault;
- (void)resetItemFrames;
- (void)resetCacheData;
- (void)reloadData;
- (void)reselectMenuItem;
- (void)deselectMenuItem;
- (void)updateSelectedItem:(_Bool)arg1;
- (void)updateScrollViewOffsetIfNeed;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutItems;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 rightButtonSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1 rightButton:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSString, NSTimer, UIControl, UIScrollView;

@interface ZHCycleBannerView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _continuous;
    _Bool _scrollViewBounces;
    id <ZHCycleBannerViewDataSource> _dataSource;
    id <ZHCycleBannerViewDelegate> _delegate;
    unsigned long long _autoPlayTimeInterval;
    unsigned long long _pageControlStyle;
    UIScrollView *_scrollView;
    UIControl *_pageControl;
    NSArray *_datasourceImages;
    unsigned long long _currentSelectedPage;
    CDUnknownBlockType _completeBlock;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) unsigned long long currentSelectedPage; // @synthesize currentSelectedPage=_currentSelectedPage;
@property(retain, nonatomic) NSArray *datasourceImages; // @synthesize datasourceImages=_datasourceImages;
@property(retain, nonatomic) UIControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) _Bool scrollViewBounces; // @synthesize scrollViewBounces=_scrollViewBounces;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long pageControlStyle; // @synthesize pageControlStyle=_pageControlStyle;
@property(nonatomic) unsigned long long autoPlayTimeInterval; // @synthesize autoPlayTimeInterval=_autoPlayTimeInterval;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) __weak id <ZHCycleBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ZHCycleBannerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)singleTapGestureRecognizer:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)autoSwitchBannerView;
- (void)setSwitchPage:(long long)arg1 animated:(_Bool)arg2 withUserInterface:(_Bool)arg3;
- (void)setCurrentPage:(long long)arg1 animated:(_Bool)arg2;
- (void)moveToTargetPosition:(double)arg1 withAnimated:(_Bool)arg2;
- (void)reloadDataWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)loadData;
- (void)initializePageControl;
- (void)initializeScrollView;
- (void)initialize;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


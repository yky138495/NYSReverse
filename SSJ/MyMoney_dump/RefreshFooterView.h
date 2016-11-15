//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RefreshBaseView.h"

@class UIScrollView;

@interface RefreshFooterView : RefreshBaseView
{
    UIScrollView *_scrollView;
}

+ (id)footerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)noConnectViewDidTap:(id)arg1;
- (void)resetNoMoreData;
- (void)endRefreshWithNoConnect;
- (void)endRefreshingWithNoMoreData;
- (void)executeRefreshingCallback;
- (double)happenOffsetY;
- (double)heightForContentBreakView;
- (void)setState:(long long)arg1;
- (void)beginRefreshing;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)updateSubviews;
- (void)willMoveToSuperview:(id)arg1;

@end


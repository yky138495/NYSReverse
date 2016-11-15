//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSString, UIActivityIndicatorView, UILabel;

@interface EGORefreshTableHeaderView : UIView
{
    id _delegate;
    int _state;
    UILabel *_lastUpdatedLabel;
    UILabel *_statusLabel;
    CALayer *_arrowImage;
    UIActivityIndicatorView *_activityView;
    NSString *_loadText;
}

@property(retain, nonatomic) NSString *loadText; // @synthesize loadText=_loadText;
@property(nonatomic) __weak id <EGORefreshTableHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)setState:(int)arg1;
- (void)updateLayout;
- (void)refreshLastUpdatedDate;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 arrowImageName:(id)arg2 textColor:(id)arg3;
- (void)updateViews;
- (void)setManualState:(int)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1 isDragging:(_Bool)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UILabel, UIView;

@interface NoConnectCell : UITableViewCell
{
    id <NoConnectCellDelegate> _delegate;
    long long _cellStyle;
    UILabel *_retryLabel;
    UIActivityIndicatorView *_activityView;
    UIView *_noConnectView;
    UIView *_topSpliteView;
    UIView *_bottomSpliteView;
}

@property(retain, nonatomic) UIView *bottomSpliteView; // @synthesize bottomSpliteView=_bottomSpliteView;
@property(retain, nonatomic) UIView *topSpliteView; // @synthesize topSpliteView=_topSpliteView;
@property(nonatomic) __weak UIView *noConnectView; // @synthesize noConnectView=_noConnectView;
@property(nonatomic) __weak UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) __weak UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) __weak id <NoConnectCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)retryLabelDidTap:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

@end


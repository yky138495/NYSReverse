//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "MWTapDetectingImageViewDelegate.h"
#import "MWTapDetectingViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class MWTapDetectingImageView, MWTapDetectingView, NSString;

@interface MWZoomingScrollView : UIScrollView <UIScrollViewDelegate, MWTapDetectingImageViewDelegate, MWTapDetectingViewDelegate>
{
    id <MWZoomingScrollViewDelegate> tapDelegate;
    MWTapDetectingView *_tapView;
    MWTapDetectingImageView *_photoImageView;
    _Bool _isShareReportPage;
    id <MWZoomingScrollViewDelegate> _tapDelegate;
}

@property(nonatomic) _Bool isShareReportPage; // @synthesize isShareReportPage=_isShareReportPage;
@property(nonatomic) __weak id <MWZoomingScrollViewDelegate> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (void).cxx_destruct;
- (void)view:(id)arg1 doubleTapDetected:(id)arg2;
- (void)view:(id)arg1 singleTapDetected:(id)arg2;
- (void)imageView:(id)arg1 doubleTapDetected:(id)arg2;
- (void)imageView:(id)arg1 singleTapDetected:(id)arg2;
- (void)handleDoubleTap:(struct CGPoint)arg1;
- (void)handleSingleTap:(struct CGPoint)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)layoutSubviews;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (void)zoomToMinimum;
- (struct CGSize)photoImageViewSize;
- (void)showImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


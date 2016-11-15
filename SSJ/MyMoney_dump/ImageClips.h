//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIImage, UIImageView, UILabel, UIScrollView;

@interface ImageClips : UIViewController <UIScrollViewDelegate>
{
    float _clipControl;
    UILabel *_topShowLabel;
    UILabel *_midShowLabel;
    UILabel *_bottomShowLabel;
    UIScrollView *_scroll;
    UIImageView *_img;
    UIImageView *_img_clip;
    CDUnknownBlockType _returnImg;
    UIImage *_img_in;
    NSString *_tipsText;
    UILabel *_reasonLabel;
    struct CGSize _midsize;
}

@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(copy, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property struct CGSize midsize; // @synthesize midsize=_midsize;
@property float clipControl; // @synthesize clipControl=_clipControl;
@property(retain, nonatomic) UIImage *img_in; // @synthesize img_in=_img_in;
@property(copy, nonatomic) CDUnknownBlockType returnImg; // @synthesize returnImg=_returnImg;
@property(retain, nonatomic) UIImageView *img_clip; // @synthesize img_clip=_img_clip;
@property(retain, nonatomic) UIImageView *img; // @synthesize img=_img;
@property(retain, nonatomic) UIScrollView *scroll; // @synthesize scroll=_scroll;
@property(retain, nonatomic) UILabel *bottomShowLabel; // @synthesize bottomShowLabel=_bottomShowLabel;
@property(retain, nonatomic) UILabel *midShowLabel; // @synthesize midShowLabel=_midShowLabel;
@property(retain, nonatomic) UILabel *topShowLabel; // @synthesize topShowLabel=_topShowLabel;
- (void).cxx_destruct;
- (id)fixOrientation:(id)arg1;
- (id)clipImage;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)closeView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)finishAction:(id)arg1;
- (void)viewDidLoad;
- (void)setReturnBlock:(CDUnknownBlockType)arg1 image:(id)arg2 control:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

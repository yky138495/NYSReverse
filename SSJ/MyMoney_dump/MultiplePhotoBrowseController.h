//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView;

@interface MultiplePhotoBrowseController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    id <MultiplePhotoBrowseControllerDelegate> _delegate;
    NSMutableArray *_images;
    NSMutableArray *_imageAnimatingStates;
    long long _allImageCount;
    long long _currentIndex;
    UILabel *_indexLabel;
    UIScrollView *_scrollView;
    UIButton *_saveButton;
    UIButton *_shareButton;
    long long _lastIndex;
    UIImageView *_photoImgView;
}

@property(retain, nonatomic) UIImageView *photoImgView; // @synthesize photoImgView=_photoImgView;
@property(nonatomic) long long lastIndex; // @synthesize lastIndex=_lastIndex;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long allImageCount; // @synthesize allImageCount=_allImageCount;
@property(retain, nonatomic) NSMutableArray *imageAnimatingStates; // @synthesize imageAnimatingStates=_imageAnimatingStates;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(nonatomic) id <MultiplePhotoBrowseControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closePhotoBrowse;
- (void)sharePostAction;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageAction;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)replaceWithImage:(id)arg1 atIndex:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)stopSpinAtIndex:(long long)arg1;
- (void)startSpinWithImage:(id)arg1 atIndex:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithPhotoCount:(long long)arg1 index:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


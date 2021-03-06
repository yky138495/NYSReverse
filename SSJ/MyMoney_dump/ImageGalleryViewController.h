//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PageGalleryViewController.h"

@class UIButton;

@interface ImageGalleryViewController : PageGalleryViewController
{
    UIButton *_pageIndicator;
    struct UIEdgeInsets _toolButtonInsets;
}

@property(nonatomic) struct UIEdgeInsets toolButtonInsets; // @synthesize toolButtonInsets=_toolButtonInsets;
@property(retain, nonatomic) UIButton *pageIndicator; // @synthesize pageIndicator=_pageIndicator;
- (void).cxx_destruct;
- (id)textOfCurrentPage;
- (void)updatePageIndicator;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageAction:(id)arg1;
- (void)dismissAction:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


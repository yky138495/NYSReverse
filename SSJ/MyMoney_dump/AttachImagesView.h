//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton;

@interface AttachImagesView : UIView
{
    id <AttachImagesViewDelegate> _delegate;
    NSMutableArray *_forumAttachImages;
    UIButton *_addButton;
}

@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSMutableArray *forumAttachImages; // @synthesize forumAttachImages=_forumAttachImages;
@property(nonatomic) __weak id <AttachImagesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)takePicture;
- (void)viewImage:(id)arg1;
- (void)replaceImageWithImage:(id)arg1 inView:(id)arg2;
- (void)moveButtonsBackwardInView:(id)arg1 afterButton:(id)arg2;
- (void)moveButtonsForwardInView:(id)arg1;
- (void)removeAllImages;
- (void)enableAddButton:(_Bool)arg1;
- (void)removeImageButton:(id)arg1;
- (void)addNewImage:(id)arg1 picId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HomeBottomToolBar, NSArray;

@interface HomeToolBarController : NSObject
{
    HomeBottomToolBar *_toolBar;
    NSArray *_itemsNumberValueArray;
    id <HomeToolBarControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HomeToolBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *itemsNumberValueArray; // @synthesize itemsNumberValueArray=_itemsNumberValueArray;
@property(retain, nonatomic) HomeBottomToolBar *toolBar; // @synthesize toolBar=_toolBar;
- (void).cxx_destruct;
- (id)buttonWithFavoriteType:(long long)arg1;
- (id)reportIconImageAccordingToType;
- (void)updateToolBarButtonsUI;
- (void)rotateArrowWithAngle:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)updateRibbonBarColor;
- (void)showArrowButtonRedDot:(_Bool)arg1;
- (void)handleButtonTapped:(id)arg1;
- (void)setupUIWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


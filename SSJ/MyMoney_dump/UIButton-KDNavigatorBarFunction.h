//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface UIButton (KDNavigatorBarFunction)
+ (void)animatingMoveToOriginalPosition:(struct CGRect)arg1 button:(id)arg2;
+ (void)fadeInAnimationWithView:(id)arg1;
+ (void)inlineEditButton:(id)arg1 inView:(id)arg2;
+ (void)animatingMoveToEndPosition:(struct CGRect)arg1 button:(id)arg2;
+ (void)fadeOutAnimationWithView:(id)arg1;
+ (void)outlineEditButton:(id)arg1 inView:(id)arg2;
+ (void)setEditButton:(id)arg1;
+ (void)setFinishButton:(id)arg1;
+ (id)flatBarButton:(id)arg1 target:(id)arg2 action:(SEL)arg3 image:(id)arg4 withRedDot:(_Bool)arg5;
+ (id)dividerLineAtView:(id)arg1 index:(long long)arg2;
+ (id)expandIndicatorAtView:(id)arg1 index:(long long)arg2;
+ (id)FDSaveBarButton;
+ (id)helpBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)unfavoriteBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)favoriteBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)deleteBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)shareBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)moreBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)searchingBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)settingBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)editingBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)addingBarButtonAtView:(id)arg1 index:(long long)arg2;
+ (id)barButtonItemCustomViewWithCustomViews:(id)arg1;
+ (id)containerViewForBarButtonNumber:(long long)arg1;
- (id)getEditBarButtonPosition;
- (void)setEditBarButtonPosition:(id)arg1;
@end

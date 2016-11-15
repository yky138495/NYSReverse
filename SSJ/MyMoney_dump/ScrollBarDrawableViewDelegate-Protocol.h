//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ScrollBarDrawableView;

@protocol ScrollBarDrawableViewDelegate <NSObject>

@optional
- (void)scrollBarDrawableViewDidBeginEditTemplate:(ScrollBarDrawableView *)arg1;
- (void)scrollBarDrawableViewDidTapAddTemplateButton:(ScrollBarDrawableView *)arg1;
- (void)scrollBarDrawableView:(ScrollBarDrawableView *)arg1 didSelectTemplate:(long long)arg2 isEditing:(_Bool)arg3;
- (void)scrollBarDrawableViewDidDrawUp:(ScrollBarDrawableView *)arg1;
- (void)scrollBarDrawableViewWillDrawUp:(ScrollBarDrawableView *)arg1;
- (void)scrollBarDrawableViewWillDrawDown:(ScrollBarDrawableView *)arg1;
- (void)scrollBarDrawableView:(ScrollBarDrawableView *)arg1 didSelectSelectedTypeAtIndex:(long long)arg2;
@end

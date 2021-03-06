//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"

@class EGORefreshTableHeaderView, NSMutableDictionary, NSString, NSTimer, NSURLRequest, UIWebView;

@interface FDWebView : UIView <UIWebViewDelegate, UIScrollViewDelegate, EGORefreshTableHeaderDelegate>
{
    _Bool _isInFinanceSubscribe;
    _Bool _isInFinanceProduct;
    id <FDWebViewDelegate> _delegate;
    unsigned long long _style;
    double _timeout;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    UIWebView *_webView;
    NSMutableDictionary *_actionMap;
    NSTimer *_actionCleaningTimer;
    EGORefreshTableHeaderView *_refreshHeaderView;
    NSTimer *_webViewTimeoutTimer;
}

+ (void)queryBoardTypesWithBoardId:(id)arg1 specialName:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (void)queryBoardsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (id)escapedStringForJavascriptParamString:(id)arg1;
+ (void)uploadJPEGImageWithImage:(id)arg1 forParamName:(id)arg2 toURL:(id)arg3 andExtraParamDictionary:(id)arg4 andCookies:(id)arg5 andUserAgent:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)uploadJPEGImageWithImage:(id)arg1 forBBSImageUploadInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)initialize;
@property(retain, nonatomic) NSTimer *webViewTimeoutTimer; // @synthesize webViewTimeoutTimer=_webViewTimeoutTimer;
@property(retain, nonatomic) EGORefreshTableHeaderView *refreshHeaderView; // @synthesize refreshHeaderView=_refreshHeaderView;
@property(retain, nonatomic) NSTimer *actionCleaningTimer; // @synthesize actionCleaningTimer=_actionCleaningTimer;
@property(retain) NSMutableDictionary *actionMap; // @synthesize actionMap=_actionMap;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic) _Bool isInFinanceProduct; // @synthesize isInFinanceProduct=_isInFinanceProduct;
@property(nonatomic) _Bool isInFinanceSubscribe; // @synthesize isInFinanceSubscribe=_isInFinanceSubscribe;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <FDWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)innerMediaWithUrlString:(id)arg1;
- (void)recordInnerMediaIfAny:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)doForumPageloadFinishedStuff;
- (_Bool)isFinanceProductWebView;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)getJSContext;
- (void)setStyle:(unsigned long long)arg1;
- (long long)postType;
- (_Bool)canReply;
- (_Bool)notifyActionName:(id)arg1 withResult:(id)arg2;
- (void)cleanTimeoutActions;
- (_Bool)canFavorite;
- (void)stopActionCleaningTimer;
- (void)startActionCleaningTimer;
- (void)stopTimeoutTimer;
- (void)restartTimeoutTimer;
- (void)handleTimeoutTimerFired;
- (void)handleCleaningTimerFired:(id)arg1;
- (_Bool)needToClose;
- (void)fontSizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)adjustFontWithSize:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadJPEGImageWithImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postReplyWithMessage:(id)arg1 andAttachmentIDs:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)postThreadWithTitle:(id)arg1 content:(id)arg2 tagID:(id)arg3 andAttachmentIDs:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)queryHelpBoardKeywords:(CDUnknownBlockType)arg1;
- (void)forumAvatarWillUpdateWithURL:(id)arg1;
- (void)openComment:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLike:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 removeOnComplete:(_Bool)arg3;
- (void)setFavorite:(_Bool)arg1 completion:(CDUnknownBlockType)arg2 removeOnComplete:(_Bool)arg3;
- (void)checkThreadFavoriteAndLikeStatus:(CDUnknownBlockType)arg1;
- (void)queryCurrentThreadDetail:(CDUnknownBlockType)arg1;
- (void)queryImageUploadInfo:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) __weak NSString *title;
@property(nonatomic) _Bool canPullDownRefresh;
- (void)addCallback:(CDUnknownBlockType)arg1 forActionName:(id)arg2 removeOnComplete:(_Bool)arg3;
- (void)removeAllActions;
- (void)removeAllCallbackForActionName:(id)arg1;
- (id)javascriptWithMethod:(id)arg1 dictionary:(id)arg2;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1 withCallback:(CDUnknownBlockType)arg2 forActionName:(id)arg3 removeOnComplete:(_Bool)arg4;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1 withCallback:(CDUnknownBlockType)arg2 forActionName:(id)arg3;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (id)currentUrlString;
- (id)boardId;
- (void)reload;
- (void)stopLoading;
- (void)goForward;
- (void)goBack;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)viewDidDisappear;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


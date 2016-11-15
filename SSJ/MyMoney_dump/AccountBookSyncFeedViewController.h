//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface AccountBookSyncFeedViewController : UIViewController <UIWebViewDelegate>
{
    NSString *_accountBookSyncId;
    UIWebView *_webView;
}

+ (id)syncFeedURLStringForAccount:(id)arg1 andPassword:(id)arg2 andAccountBookSyncId:(id)arg3;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *accountBookSyncId; // @synthesize accountBookSyncId=_accountBookSyncId;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

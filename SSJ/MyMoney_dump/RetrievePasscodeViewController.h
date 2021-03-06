//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NSURLConnectionDataDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableData, NSString, NSURLConnection, UITextField;

@interface RetrievePasscodeViewController : UIViewController <UITextFieldDelegate, NSURLConnectionDataDelegate, UIAlertViewDelegate>
{
    UITextField *_emailTextField;
    NSString *_myPasscode;
    NSMutableData *_responseData;
    NSURLConnection *_connection;
}

@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSString *myPasscode; // @synthesize myPasscode=_myPasscode;
@property(retain, nonatomic) UITextField *emailTextField; // @synthesize emailTextField=_emailTextField;
- (void).cxx_destruct;
- (void)showFailAlertWithMessage:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)beginRetrievePassCode;
- (id)generateRandomPasscode;
- (void)retrieveAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


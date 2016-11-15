//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString, NSURLConnection;

@interface QueryRequest : NSObject
{
    id <QueryRequestDelegate> _delegate;
    NSURLConnection *_queryConnection;
    NSMutableData *_queryData;
    NSString *_requestFlag;
    id errorHandler;
    NSString *_reques;
}

@property(retain, nonatomic) NSMutableData *queryData; // @synthesize queryData=_queryData;
@property(retain, nonatomic) NSURLConnection *queryConnection; // @synthesize queryConnection=_queryConnection;
@property(retain, nonatomic) NSString *requestFlag; // @synthesize requestFlag=_reques;
@property(nonatomic) __weak id <QueryRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)handleError:(id)arg1;
- (void)setErrorHandler:(id)arg1;
- (id)initWithGetRequestUrl:(id)arg1;
- (id)initWithRequestUrl:(id)arg1;

@end


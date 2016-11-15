//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, NSURL;

@interface DTRpcConfig : NSObject
{
    _Bool _networkActivityIndicatorVisible;
    _Bool _requestGZip;
    NSURL *_gatewayURL;
    NSString *_operationType;
    double _timeout;
    NSMutableDictionary *_userInfo;
}

@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(nonatomic) _Bool requestGZip; // @synthesize requestGZip=_requestGZip;
@property(nonatomic) _Bool networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
@property(retain, nonatomic) NSURL *gatewayURL; // @synthesize gatewayURL=_gatewayURL;
- (void).cxx_destruct;
- (id)copy;
- (id)init;

@end


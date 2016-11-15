//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSData, NSDate, NSDictionary, NSNumber, NSString;

@interface FlurryPulseCallbackAttemptInfo : NSObject <NSCoding, NSCopying>
{
    _Bool _finalAttempt;
    _Bool _beingFired;
    int _logSendState;
    int _httpStatus;
    int _requestState;
    int _repeatDuration;
    int _method;
    NSString *_substitutedUrl;
    NSString *_body;
    NSDictionary *_headers;
    NSNumber *_eventOccuranceId;
    NSString *_invokeId;
    NSNumber *_callbackId;
    NSNumber *_attemptNumber;
    NSNumber *_cbSessionId;
    NSNumber *_cbSessionOffset;
    NSData *_responseBody;
    NSNumber *_redirectsCount;
    NSNumber *_duration;
    NSDictionary *_params;
    NSDate *_creationTime;
    NSDate *_expiration;
}

@property(copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(nonatomic) int method; // @synthesize method=_method;
@property(nonatomic) int repeatDuration; // @synthesize repeatDuration=_repeatDuration;
@property(nonatomic) _Bool beingFired; // @synthesize beingFired=_beingFired;
@property(copy, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSNumber *redirectsCount; // @synthesize redirectsCount=_redirectsCount;
@property(copy, nonatomic) NSData *responseBody; // @synthesize responseBody=_responseBody;
@property(nonatomic) int requestState; // @synthesize requestState=_requestState;
@property(nonatomic) int httpStatus; // @synthesize httpStatus=_httpStatus;
@property(nonatomic) _Bool finalAttempt; // @synthesize finalAttempt=_finalAttempt;
@property(copy, nonatomic) NSNumber *cbSessionOffset; // @synthesize cbSessionOffset=_cbSessionOffset;
@property(copy, nonatomic) NSNumber *cbSessionId; // @synthesize cbSessionId=_cbSessionId;
@property(copy, nonatomic) NSNumber *attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(copy, nonatomic) NSNumber *callbackId; // @synthesize callbackId=_callbackId;
@property(copy, nonatomic) NSString *invokeId; // @synthesize invokeId=_invokeId;
@property(copy, nonatomic) NSNumber *eventOccuranceId; // @synthesize eventOccuranceId=_eventOccuranceId;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *substitutedUrl; // @synthesize substitutedUrl=_substitutedUrl;
@property(nonatomic) int logSendState; // @synthesize logSendState=_logSendState;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


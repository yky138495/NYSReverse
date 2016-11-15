//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MGHTTPHelper : NSObject
{
}

+ (id)URLDecode:(id)arg1;
+ (id)URLEncode:(id)arg1 data:(id)arg2;
+ (id)StringDecode:(id)arg1;
+ (id)StringEncode:(id)arg1;
+ (void)sendRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)sendRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)sendRequest:(id)arg1 decryptResponceObject:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)deviceInfo;
+ (id)POSTRequest:(id)arg1 content:(id)arg2 contentType:(id)arg3 timeout:(double)arg4;
+ (id)POSTRequest:(id)arg1 params:(id)arg2 timeout:(double)arg3;
+ (id)GETRequest:(id)arg1 params:(id)arg2 timeout:(double)arg3;
+ (id)GETRequestWithDeviceInfo:(id)arg1 params:(id)arg2 timeout:(double)arg3;
+ (id)queryString:(id)arg1 sidDic:(id)arg2 encryptKey:(id)arg3;
+ (id)queryString:(id)arg1 sidDic:(id)arg2;

@end


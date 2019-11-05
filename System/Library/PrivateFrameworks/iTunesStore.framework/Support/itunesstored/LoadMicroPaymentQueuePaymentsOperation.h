/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISStoreURLOperationDelegate.h>

@class MicroPaymentQueueRequest, MicroPaymentQueueResponse, NSString, NSNumber;

@interface LoadMicroPaymentQueuePaymentsOperation : ISOperation <ISStoreURLOperationDelegate> {

	MicroPaymentQueueRequest* _request;
	MicroPaymentQueueResponse* _response;
	NSString* _urlBagKey;

}

@property (retain) MicroPaymentQueueResponse * response;                                                //@synthesize response=_response - In the implementation block
@property (copy) MicroPaymentQueueRequest * request;                                                    //@synthesize request=_request - In the implementation block
@property (retain) NSString * URLBagKey;                                                                //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
-(void)dealloc;
-(void)run;
-(MicroPaymentQueueRequest *)request;
-(void)setRequest:(MicroPaymentQueueRequest *)arg1 ;
-(MicroPaymentQueueResponse *)response;
-(void)setResponse:(MicroPaymentQueueResponse *)arg1 ;
-(void)setURLBagKey:(NSString *)arg1 ;
-(NSString *)URLBagKey;
-(BOOL)_loadResponseReturningError:(id*)arg1 ;
-(BOOL)_parsePropertyList:(id)arg1 error:(id*)arg2 ;
-(BOOL)_appendRangeRequestsToResponse:(id)arg1 error:(id*)arg2 ;
@end


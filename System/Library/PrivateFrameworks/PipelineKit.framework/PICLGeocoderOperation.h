/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PipelineKit/PIOperationSubclass.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface PICLGeocoderOperation : PIOperationSubclass {

	NSObject*<OS_dispatch_source> _timer;

}
+(id)operationForceGeocoderWithLocation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)operationWithLocation:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_setupTimeOutForGeocoder:(id)arg1 finishBlock:(/*^block*/id)arg2 ;
-(void)_stopTimeOut;
@end


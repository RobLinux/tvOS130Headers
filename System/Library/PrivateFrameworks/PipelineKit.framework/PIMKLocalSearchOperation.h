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

@interface PIMKLocalSearchOperation : PIOperationSubclass {

	NSObject*<OS_dispatch_source> _timer;
	id _ticket;

}
+(id)operationWithQuery:(id)arg1 inRegion:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)operationWithRegion:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
+(id)operationWithRegion:(id)arg1 categories:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)operationWithMUIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end


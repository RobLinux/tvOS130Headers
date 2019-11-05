/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PipelineKit.framework/PipelineKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PipelineKit/PIOperation.h>

@interface PIOperationSubclass : PIOperation {

	/*^block*/id _finishBlock;

}

@property (nonatomic,copy,readonly) id finishBlock;              //@synthesize finishBlock=_finishBlock - In the implementation block
-(void)cancel;
-(void)_cleanup;
-(void)cleanup;
-(void)execute;
-(/*^block*/id)cancellationBlock;
-(void)_didFinish;
-(id)finishBlock;
-(/*^block*/id)executionBlock;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TROperationHandler.h>

@class NSString;

@interface TRCompletionOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleCompletionRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
@end


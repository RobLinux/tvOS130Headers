/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHMediaRequestContext.h>

@class PHImageRequestOptions;

@interface PHAdjustmentDataRequestContext : PHMediaRequestContext {

	PHImageRequestOptions* _options;

}

@property (nonatomic,readonly) PHImageRequestOptions * options;              //@synthesize options=_options - In the implementation block
+(long long)type;
-(PHImageRequestOptions *)options;
-(BOOL)isNetworkAccessAllowed;
-(id)initialRequests;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
@end


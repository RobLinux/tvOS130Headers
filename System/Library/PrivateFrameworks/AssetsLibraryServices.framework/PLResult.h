/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface PLResult : NSObject {

	id _result;
	NSError* _error;

}

@property (readonly) id result;                         //@synthesize result=_result - In the implementation block
@property (copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isFailure; 
+(id)failureWithError:(id)arg1 ;
+(id)successWithResult:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(id)result;
-(id)resultWithError:(id*)arg1 ;
-(BOOL)isSuccess;
-(id)initWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)isFailure;
@end


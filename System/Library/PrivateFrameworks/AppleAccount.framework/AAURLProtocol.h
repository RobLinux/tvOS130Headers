/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface AAURLProtocol : NSURLProtocol {

	unsigned long long _state;

}
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)stopLoading;
-(void)startLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id)_normalizedRequestForURL:(id)arg1 ;
@end


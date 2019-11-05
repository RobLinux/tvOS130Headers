/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AuthKit/AuthKit-Structs.h>
@class NSDate;

@interface AKAbsintheSigner : NSObject {

	NACContextOpaque_Ref _context;
	NSDate* _contextCreationDate;

}
+(id)sharedSigner;
-(void)dealloc;
-(void)signatureForURLRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_generateSignatureForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_createSigningContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_didSigningContextExpire;
-(void)_destroySigningContext;
-(id)_sessionInfoFromCertificateData:(id)arg1 ;
-(void)_establishSessionWithInfo:(id)arg1 sessionURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)signatureForURLRequest:(id)arg1 ;
@end


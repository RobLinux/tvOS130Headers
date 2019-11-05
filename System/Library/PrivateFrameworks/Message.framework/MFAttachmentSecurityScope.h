/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileCoordinator, NSURL, NSData;

@interface MFAttachmentSecurityScope : NSObject {

	NSFileCoordinator* _fileCoordinator;
	NSURL* _securityScopedURL;
	NSData* _securityScopeToken;
	NSURL* _secureReadURL;
	BOOL _securedRead;
	NSURL* _secureWriteURL;
	BOOL _securedWrite;

}
+(id)securityScopedURL:(id)arg1 ;
+(id)securityScopedURL:(id)arg1 withToken:(id)arg2 ;
-(void)dealloc;
-(id)data;
-(BOOL)isReadable;
-(id)startReadAccess;
-(BOOL)isBundle;
-(id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2 ;
-(void)stopAccess;
-(void)_attachSecurityScope;
-(id)_temporaryReadURL:(id)arg1 error:(id*)arg2 ;
-(void)_removeTemporaryReadURL;
-(id)securityScopeToken;
-(id)startWriteAccess;
@end


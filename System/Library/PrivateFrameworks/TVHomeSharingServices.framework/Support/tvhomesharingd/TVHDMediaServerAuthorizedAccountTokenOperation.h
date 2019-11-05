/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/Support/tvhomesharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <tvhomesharingd/TVHDMediaServerRequestOperation.h>

@class NSNumber, NSData, TVHDFairPlaySAPContext;

@interface TVHDMediaServerAuthorizedAccountTokenOperation : TVHDMediaServerRequestOperation {

	BOOL _useTokenEncryption;
	NSNumber* _tokenStatus;
	NSData* _tokenData;
	TVHDFairPlaySAPContext* _fairPlaySAPContext;

}

@property (nonatomic,copy) NSNumber * tokenStatus;                                     //@synthesize tokenStatus=_tokenStatus - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                                         //@synthesize tokenData=_tokenData - In the implementation block
@property (nonatomic,retain) TVHDFairPlaySAPContext * fairPlaySAPContext;              //@synthesize fairPlaySAPContext=_fairPlaySAPContext - In the implementation block
@property (assign,nonatomic) BOOL useTokenEncryption;                                  //@synthesize useTokenEncryption=_useTokenEncryption - In the implementation block
-(void)_handleResponse:(id)arg1 ;
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
-(TVHDFairPlaySAPContext *)fairPlaySAPContext;
-(void)setFairPlaySAPContext:(TVHDFairPlaySAPContext *)arg1 ;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(void)setUseTokenEncryption:(BOOL)arg1 ;
-(BOOL)useTokenEncryption;
-(id)initWithUserIdentifier:(id)arg1 loginSession:(id)arg2 useTokenEncryption:(BOOL)arg3 requestSession:(id)arg4 ;
-(NSNumber *)tokenStatus;
-(id)_decryptTokenData:(id)arg1 ;
-(void)setTokenStatus:(NSNumber *)arg1 ;
@end


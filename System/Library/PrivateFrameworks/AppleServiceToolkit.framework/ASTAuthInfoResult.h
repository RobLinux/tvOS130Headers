/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSData;

@interface ASTAuthInfoResult : ASTSealablePayload {

	NSData* _attestation;

}

@property (nonatomic,retain) NSData * attestation;              //@synthesize attestation=_attestation - In the implementation block
+(id)sealedAuthInfoResultWithPayload:(id)arg1 signature:(id)arg2 ;
+(id)authInfoResultWithAttestation:(id)arg1 ;
-(void)setAttestation:(NSData *)arg1 ;
-(NSData *)attestation;
-(id)generatePayload;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFEncryptionOperation.h>
#import <SecurityFoundation/NSCopying.h>

@class SFRSAEncryptionOperation, SFSymmetricEncryptionOperation, NSString, _SFKeySpecifier;

@interface SFRSA_WrappedKeyEncryptionOperation : NSObject <_SFEncryptionOperation, NSCopying> {

	id _wrappedKeyEncryptionOperationInternal;

}

@property (nonatomic,copy) SFRSAEncryptionOperation * keyWrappingOperation; 
@property (nonatomic,copy) SFSymmetricEncryptionOperation * sessionEncryptionOperation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) _SFKeySpecifier * encryptionKeySpecifier; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFRSAEncryptionOperation *)keyWrappingOperation;
-(SFSymmetricEncryptionOperation *)sessionEncryptionOperation;
-(id)encrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(id)decrypt:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
-(_SFKeySpecifier *)encryptionKeySpecifier;
-(id)initWithKeyWrappingOperation:(id)arg1 ;
-(id)initWithKeyWrappingOperation:(id)arg1 sessionEncryptionOperation:(id)arg2 ;
-(void)setKeyWrappingOperation:(SFRSAEncryptionOperation *)arg1 ;
-(void)setSessionEncryptionOperation:(SFSymmetricEncryptionOperation *)arg1 ;
@end

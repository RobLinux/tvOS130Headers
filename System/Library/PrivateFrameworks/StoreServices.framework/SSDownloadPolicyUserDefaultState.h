/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/NSSecureCoding.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCopying.h>

@class NSString, NSNumber;

@interface SSDownloadPolicyUserDefaultState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying> {

	NSString* _domain;
	NSNumber* _fallbackNumberValue;
	NSString* _key;
	BOOL _shouldInvertBoolValue;

}

@property (nonatomic,copy) NSString * domain;                           //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy) NSNumber * fallbackNumberValue;              //@synthesize fallbackNumberValue=_fallbackNumberValue - In the implementation block
@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL shouldInvertBoolValue;                //@synthesize shouldInvertBoolValue=_shouldInvertBoolValue - In the implementation block
@property (nonatomic,readonly) BOOL currentBoolValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(NSString *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)currentBoolValue;
-(NSNumber *)fallbackNumberValue;
-(void)setFallbackNumberValue:(NSNumber *)arg1 ;
-(BOOL)shouldInvertBoolValue;
-(void)setShouldInvertBoolValue:(BOOL)arg1 ;
@end

